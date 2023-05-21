/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_and_transfer_to_stack_b.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:03:26 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/21 16:55:15 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sort_and_transfer_to_stack_b(t_node **stack_a, t_node **stack_b, int *table, int range)
{
	int	i;

	i = 0;
	while (*stack_a)
	{
		if ((*stack_a)->data <= table[i])
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			i++;
		}
		else if ((*stack_a)->data > table[i] && (*stack_a)->data <= table[range + i])
		{
			pb(stack_a, stack_b);
			i++;
		}
		else
			ra(stack_a);
	}
}