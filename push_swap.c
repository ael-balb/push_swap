/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 11:15:22 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/21 18:41:23 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	verify_sorted(t_node *stack)
{
	while (stack->next != NULL)
	{
		if (stack->data > stack->next->data)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	sorted_stack(t_node **stack_a, t_node **stack_b)
{
	int	size;

	size = ft_length(*stack_a);
	if (verify_sorted(*stack_a))
		exit (0);
	if (size == 2 && !verify_sorted(*stack_a))
		sort_two_nmbs(stack_a);
	else if (size == 3 && !verify_sorted(*stack_a))
		sort_three_nmbs(stack_a);
	else if (size > 3 && size < 6 && !verify_sorted(*stack_a))
		sort_4nmbs_and_5nmbs(stack_a, stack_b);
	else if (size <= 100 && !verify_sorted(*stack_a))
		sort_Greater_Than_Five(stack_a, stack_b, 15);
	else if (size <= 500 && !verify_sorted(*stack_a))
		sort_Greater_Than_Five(stack_a, stack_b, 32);
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
			ft_putstr_fd("error: No Numbers Provided\n", 2);
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
		sorted_stack(&stack_a, &stack_b);
	}
}