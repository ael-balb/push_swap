/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:27:20 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/21 18:22:05 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void    swap_a_b(t_node *stack)
{
    int tmp;
    
    tmp = stack->data;
    stack->data = stack->next->data;
    stack->next->data = tmp;
}

void    sa(t_node **stack_a)
{
    swap_a_b(*stack_a);
}

void    sb(t_node **stack_b)
{
    swap_a_b(*stack_b);
}

void    ss(t_node **stack_a, t_node **stack_b)
{
    swap_a_b(*stack_a);
    swap_a_b(*stack_b);
}
