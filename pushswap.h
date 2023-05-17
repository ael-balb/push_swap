/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:24:58 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/17 16:14:10 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	ft_putstr_fd(char *str, int fd);
void	sa(t_node **a);
void 	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **stack_a, t_node **stack_b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
void	sort_two_nmbs(t_node **stack);
void	sort_three_nmbs(t_node **stack);
void	sort_4nmbs_and_5nmbs(t_node **stack_a, t_node **stack_b);
int		ft_length(t_node *stack);
int		find_small_nmbs(t_node *stack);
int		findNumberPosition(t_node *stack, int nmbr);
void	sort_Greater_Than_Five(t_node **stack_a, t_node **stack_b, int range);






typedef struct s_node 
{
    int data;
    struct node *next;
}				t_node;






#endif