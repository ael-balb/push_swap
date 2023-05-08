/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:24:58 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/08 17:51:23 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	ft_putstr_fd(char *str, int fd);
void    sa(t_node **a);
void    sb(t_node **b);
void    ss(t_node **a, t_node **b);
void    pa(t_node **stack_a, t_node **stack_b);
void    pb(t_node **stack_a, t_node **stack_b);





typedef struct s_node 
{
    int data;
    struct node *next;
}               t_node;






#endif