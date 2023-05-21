/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_big_nmbs_index.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:33:49 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/21 16:52:36 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_big_nmbs_index(t_node *stack_b)
{
	int	max_number;
	int	max_index;
	int	i;

	i = 0;
	max_index = 0;
	max_number = stack_b->data;
	while (stack_b)
	{
		if (max_number < stack_b->data)
		{
			max_number = stack_b->data;
			max_index = i;
		}
		stack_b = stack_b->next;
		i++;
	}
	return (max_index);
}