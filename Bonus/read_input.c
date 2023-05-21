/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:51:40 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/21 18:03:03 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	read_input(t_node **stack_a, t_node **stack_b)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
        if (!str)
            return ;
		actions_check(stack_a, stack_b, str);
		free(str);
		str = get_next_line(0);
	}
}