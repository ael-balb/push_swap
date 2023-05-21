/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:14:13 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/21 18:22:44 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rra_rrb(t_node **stack)
{
	t_node	*last_node;
	t_node	*bfr_last;

	if (stack == NULL || (*stack)->next == NULL)
		return ;
	last_node = *stack;
	while (last_node->next != NULL)
	{
		bfr_last = last_node;
		last_node = last_node->next;
	}
	bfr_last->next = NULL;
	last_node->next = *stack;
	*stack = last_node;
}

void	rra(t_node **a)
{
	rra_rrb(a);
}

void	rrb(t_node **b)
{
	rra_rrb(b);
}

void	rrr(t_node **a, t_node **b)
{
	rra_rrb(a);
	rra_rrb(b);
}