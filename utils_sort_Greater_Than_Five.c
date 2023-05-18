/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort_Greater_Than_Five.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:15:51 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/18 16:01:31 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	*sort_int_tab(int *table, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (table[i] > table[j])
			{
				tmp = table[i];
				table[i] = table[j];
				table[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (table);
}
int	*Copy_Stack_To_Table(t_node *stack_a)
{
	int	*table;
	int	size;
	int	i;

	i = 0;
	size = ft_length(stack_a);
	table = malloc(sizeof(int) * size);
	while (stack_a)
	{
		table[i] = stack_a->data;
		stack_a = stack_a->next;
		i++;
	}
	return (sort_int_tab(table, size));
}
