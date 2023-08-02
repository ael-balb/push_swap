/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:51:49 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/23 16:06:33 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_rb(t_node **stack)
{
	t_node	*ptr;
	t_node	*last_node;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	ptr = *stack;
	*stack = (*stack)->next;
	last_node = *stack;
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = ptr;
	ptr->next = NULL;
}

void	ra(t_node **stack_a)
{
	ra_rb(stack_a);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_node **stack_b)
{
	ra_rb(stack_b);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	ra_rb(stack_a);
	ra_rb(stack_b);
	ft_putstr_fd("rr\n", 1);
}
