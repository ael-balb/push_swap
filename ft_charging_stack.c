/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charging_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:39:03 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/27 18:10:09 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	charging_stack(t_node **stack_a, char **str)
{
	int			i;
	long int	nmbs;

	i = 0;
	nmbs = 0;
	while (str[i])
	{
		nmbs = ft_atoi(str[i]);
		if (nmbs < INT_MIN || nmbs > INT_MAX)
		{
			ft_putstr_fd("error: Number is Out of", 2);
			ft_putstr_fd(" Range for Integer Values\n", 2);
			exit (1);
		}
		ft_add_node_back(stack_a, ft_new_node(nmbs));
		i++;
	}
	check_double_nmbrs(*stack_a);
}

void	check_double_nmbrs(t_node *stack_a)
{
	int	*str;
	int	size;
	int	i;
	int	j;

	i = 0;
	str = copy_table_from_stack_a(stack_a);
	size = ft_length(stack_a);
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (str[i] == str[j])
			{
				ft_putstr_fd("error: Double Numbers Found\n", 2);
				exit (1);
			}
			j++;
		}
		i++;
	}
	free (str);
}

int	*copy_table_from_stack_a(t_node *stack_a)
{
	int	*str;
	int	i;
	int	size;

	i = 0;
	size = ft_length(stack_a);
	str = malloc(sizeof(int) * size);
	while (stack_a)
	{
		str[i] = stack_a->data;
		stack_a = stack_a->next;
		i++;
	}
	return (str);
}
