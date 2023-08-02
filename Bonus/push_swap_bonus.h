/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:24:58 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/25 19:09:45 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdlib.h>
# include "get_next_line.h"
# include <unistd.h>
# include <fcntl.h>
# include <limits.h>

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}					t_node;

void	ft_putstr_fd(char *str, int fd);
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **stack_a, t_node **stack_b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
int		ft_length(t_node *stack);
long	ft_atoi(char *str);
void	ft_add_node_back(t_node **list, t_node *new);
void	charging_stack(t_node **stack_a, char **str);
t_node	*ft_new_node(int nmbr);
void	check_double_nmbrs(t_node *stack_a);
int		*copy_table_from_stack_a(t_node *stack_a);
void	checking_nmbr(char **str);
int		ft_isdigit(int c);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s1);
int		verify_sorted(t_node *stack);
void	sorted_stack(t_node **stack_a, t_node **stack_b);
char	*join_nmbs(char **str);
size_t	ft_strlen(const char *s);
int		ft_strcmp(char *s1, char *s2);
void	actions_check(t_node **stack_a, t_node **stack_b, char *str);
void	read_input(t_node **stack_a, t_node **stack_b);

#endif