/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:37:42 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/21 16:54:01 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_node	*ft_new_node(int nmbr)
{
	t_node	*list;

	list = (t_node *)malloc((sizeof(t_node)));
	if (!list)
		return (NULL);
	list->data = nmbr;
	list->next = NULL;
	return (list);
}