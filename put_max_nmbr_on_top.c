/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_max_nmbr_on_top.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:17:31 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/18 16:23:42 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	place_max_nb_to_top(t_node **stack_b)
{
	int	max;
	int	size;

	while (1)
	{
		max = find_max_nb(*stack_b);
		size = ft_length(*stack_b);
		if (max == 0)
			break ;
		if (max > size / 2)
			rrb(stack_b);
		else if (max <= size / 2)
			rb(stack_b);
	}
}
