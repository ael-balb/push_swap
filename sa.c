/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:27:20 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/21 17:25:26 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap_a_b(t_node *stack)
{
    int tmp;
    if (stack == NULL || stack->next == NULL)
		return ;
    tmp = stack->data;
    stack->data = stack->next->data;
    stack->next->data = tmp;
}

void    sa(t_node **stack_a)
{
    swap_a_b(*stack_a);
    ft_putstr_fd("sa\n", 1);
}

void    sb(t_node **stack_b)
{
    swap_a_b(*stack_b);
    ft_putstr_fd("sb\n", 1);
}

void    ss(t_node **stack_a, t_node **stack_b)
{
    swap_a_b(*stack_a);
    swap_a_b(*stack_b);
    ft_putstr_fd("ss\n", 1);
}
