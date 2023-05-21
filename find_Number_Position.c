/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_Number_Position.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:17:59 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/21 16:52:31 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int findNumberPosition(t_node *stack, int nmbr)
{
    int i;
    
    i = 0;
    while (stack->data != nmbr)
    {
        i++;
        stack = stack->next;
    }
    return (i);
}