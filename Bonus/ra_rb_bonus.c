/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:51:49 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/21 18:43:36 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ra_rb(t_node **stack)
{
    t_node  *ptr;
    t_node  *last_node;

    if (*stack == NULL || (*stack)->next == NULL)
		return ;
    ptr = *stack;
    *stack = (*stack)->next;
    last_node = *stack; 
    while(last_node->next != NULL)
        last_node = last_node->next;
    last_node->next = ptr;
    ptr->next = NULL;
}

void	ra(t_node **stack_a)
{
	ra_rb(stack_a);
}

void	rb(t_node **stack_b)
{
	ra_rb(stack_b);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	ra_rb(stack_a);
	ra_rb(stack_b);
}