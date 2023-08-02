/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:28:55 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/23 16:11:34 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a_b(t_node **src, t_node **dst)
{
	t_node	*ptr;

	if (*src == NULL)
		return ;
	ptr = (*src)->next;
	(*src)->next = *dst;
	*dst = *src;
	*src = ptr;
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	push_a_b(stack_b, stack_a);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	push_a_b(stack_a, stack_b);
	ft_putstr_fd("pb\n", 1);
}
