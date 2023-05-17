/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_length.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:33:54 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/17 11:48:13 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_length(t_node *stack)
{
	int	len;
	if(!stack)
		return(0);
	while(stack!= NULL)
	{
		stack = stack->next;
		len++;
	}
	return(len);
}