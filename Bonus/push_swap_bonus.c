/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:59:30 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/27 18:49:14 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit (1);
}

int	verify_sorted(t_node *stack)
{
	if (stack == NULL)
		return (1);
	while (stack->next != NULL)
	{
		if (stack->data > stack->next->data)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	actions_check(t_node **stack_a, t_node **stack_b, char *str)
{
	if (!ft_strcmp(str, "sa\n"))
		sa(stack_a);
	else if (!ft_strcmp(str, "sb\n"))
		sb(stack_b);
	else if (!ft_strcmp(str, "ss\n"))
		ss(stack_a, stack_b);
	else if (!ft_strcmp(str, "pa\n"))
		pa(stack_a, stack_b);
	else if (!ft_strcmp(str, "pb\n"))
		pb(stack_a, stack_b);
	else if (!ft_strcmp(str, "ra\n"))
		ra(stack_a);
	else if (!ft_strcmp(str, "rb\n"))
		rb(stack_b);
	else if (!ft_strcmp(str, "rr\n"))
		rr(stack_a, stack_b);
	else if (!ft_strcmp(str, "rra\n"))
		rra(stack_a);
	else if (!ft_strcmp(str, "rrb\n"))
		rrb(stack_b);
	else if (!ft_strcmp(str, "rrr\n"))
		rrr(stack_a, stack_b);
	else
		error();
}

char	*join_nmbs(char **str)
{
	int		i;
	int		j;
	char	*nmbs;

	i = 1;
	nmbs = ft_strdup("");
	while (str[i])
	{
		j = 0;
		while (str[i][j] == ' ')
			j++;
		if (!str[i][j])
		{
			ft_putstr_fd("ERROR: No Numbers Provided\n", 2);
			exit (1);
		}
		nmbs = ft_strjoin(nmbs, str[i]);
		nmbs = ft_strjoin(nmbs, " ");
		i++;
	}
	return (nmbs);
}

int	main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;
	char	**str;
	char	*nmbs;

	if (ac >= 2)
	{
		nmbs = join_nmbs(av);
		str = ft_split(nmbs, ' ');
		free (nmbs);
		checking_nmbr(str);
		charging_stack(&stack_a, str);
		read_input(&stack_a, &stack_b);
		if (verify_sorted(stack_a) && stack_b == NULL)
			ft_putstr_fd("OK\n", 1);
		else
			ft_putstr_fd("KO\n", 1);
	}
}
