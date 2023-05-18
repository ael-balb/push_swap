/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_length.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:33:54 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/18 16:27:03 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_length(t_node *stack)
{
	int	i;
	i = 0;
	
	if(!stack)
		return(0);
	while(stack!= NULL)
	{
		stack = stack->next;
		i++;
	}
	return(i);
}