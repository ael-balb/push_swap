/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_number_position.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:37:11 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/23 16:33:51 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_number_position(t_node *stack, int nmbr)
{
	int	i;

	i = 0;
	while (stack->data != nmbr)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}
