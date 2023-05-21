/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:31:29 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/21 16:53:42 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_add_node_back(t_node **list, t_node *new)
{
	t_node	*ptr;

	if (!list)
		return ;
	else if (*list == NULL)
		*list = new;
	else
	{
		ptr = *list;
		while (ptr -> next != NULL)
			ptr = ptr -> next;
		ptr -> next = new;
	}
}
