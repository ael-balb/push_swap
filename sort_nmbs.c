/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_nmbs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:43:37 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/18 14:14:31 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
void	sort_two_nmbs(t_node **stack)
{
    if((*stack)->data > (*stack)->next->data)
        sa(stack);
}

void	sort_three_nmbs(t_node **stack)
{
	if(((*stack)->data) < ((*stack)->next->data) && (*stack)->data < ((*stack)->next->next->data))
	{
		if((*stack)->next->data > (*stack)->next->next->data)
		{
			rra(stack);
			sa(stack);
		}
	}
	else if((*stack)->data > (*stack)->next->data && (*stack)->data > (*stack)->next->next->data)
		ra(stack);
	else if (((*stack)->data > (*stack)->next->data)
		&& ((*stack)->data > (*stack)->next->next->data))
	{
		if ((*stack)->next->data < (*stack)->next->next->data)
			ra(stack);
		else
		{
			sa(stack);
			rra(stack);
		}
	}
	else if((*stack)->data > (*stack)->next->data && (*stack)->next->data < (*stack)->next->next->data)
		sa(stack);
	else if ((*stack)->data < (*stack)->next->data && (*stack)->data > (*stack)->next->next->data)
		rra(stack);
	
}

void	sort_4nmbs_and_5nmbs(t_node **stack_a, t_node **stack_b)
{
	int	i;

	while (ft_length(*stack_a) > 3 && ft_length(*stack_a) < 6)
	{
		i = find_small_nmbs(*stack_a);
		while (i != (*stack_a)->data)
		{
			if (find_Number_Position(*stack_a, i) > ft_length(*stack_a) / 2)
				rra(stack_a);
			else
				ra(stack_a);
		}
		pb(stack_a, stack_b);
	}
	sort_three_nmbs(stack_a);
	while (*stack_b)
		pa(stack_a, stack_b);
}

void	sort_Greater_Than_Five(t_node **stack_a, t_node **stack_b, int range)
{
	int	*table;

	table = Copy_Stack_To_Table(*stack_a);
	sort_and_transfer_to_stack_b(stack_a, stack_b, table, range);
	while (*stack_b)
	{
		put_max_nmbr_on_top(stack_b);
		pa(stack_a, stack_b);
	}
	free (table);
}