/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:27:20 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/08 17:27:02 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void    swap_a_b(t_node *stack)
{
    int tmp;
    
    tmp = stack->data;
    stack->data = stack->next->data;
    stack->next->data = tmp;
}

void    sa(t_node **a)
{
    swap_a_b(*a);
    ft_putstr_fd("sa\n", 1);
}

void    sb(t_node **b)
{
    swap_a_b(*b);
    ft_putstr_fd("sb\n", 1);
}

void    ss(t_node **a, t_node **b)
{
    swap_a_b(*a);
    swap_a_b(*b);
    ft_putstr_fd("ss\n", 1);
}
