/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:14:13 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/23 15:11:23 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_node **b)
{
	rra_rrb(b);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_node **a, t_node **b)
{
	rra_rrb(a);
	rra_rrb(b);
	ft_putstr_fd("rrr\n", 1);
}
