/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_small_nmbs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:47:21 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/21 16:53:39 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	find_small_nmbs(t_node *stack)
{
	int	i;
	i = stack->data;
	while(stack)
	{
		if(i > stack->data)
			i = stack->data;
		stack = stack->next;
	}
	return(i);
}