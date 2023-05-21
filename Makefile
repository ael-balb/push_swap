# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 16:28:44 by ael-balb          #+#    #+#              #
#    Updated: 2023/05/21 19:08:45 by ael-balb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BONUS = checker
CC = cc
FLAGS = -Wall -Wextra -Werror
SRC = ft_putstr_fd.c pa_pb.c ra_rb.c sa.c rra_rrb.c sort_and_transfer_to_stack_b.c put_max_nmbr_on_top.c  sort_nmbs.c \
		utils_sort_Greater_Than_Five.c find_big_nmbs_index.c find_Number_Position.c \
		find_small_nmbs.c ft_add_node_back.c ft_atoi.c ft_charging_stack.c \
		ft_cheking_nmbr.c ft_isdigit.c ft_length.c ft_new_node.c  push_swap.c\
		ft_split.c ft_strdup.c ft_strjoin.c ft_strlen.c 



SRC_BONUS = Bonus/get_next_line.c Bonus/get_next_line_utils.c Bonus/push_swap_bonus.c Bonus/read_input.c Bonus/ft_putstr_fd.c \
			Bonus/pa_pb_bonus.c Bonus/ra_rb_bonus.c Bonus/sa_bonus.c Bonus/rra_rrb_bonus.c Bonus/sort_and_transfer_to_stack_b.c \
			Bonus/put_max_nmbr_on_top.c Bonus/sort_nmbs.c Bonus/utils_sort_Greater_Than_Five.c \
			Bonus/find_big_nmbs_index.c Bonus/find_Number_Position.c Bonus/find_small_nmbs.c \
			Bonus/ft_add_node_back.c Bonus/ft_atoi.c Bonus/ft_charging_stack.c Bonus/ft_cheking_nmbr_bonus.c \
			Bonus/ft_isdigit.c Bonus/ft_length.c Bonus/ft_new_node.c Bonus/ft_split.c Bonus/ft_strdup.c \
			Bonus/ft_strjoin.c Bonus/ft_strlen.c Bonus/ft_strcmp.c
			 


OBJS = $(SRC:.c=.o)

OBJS_BONUS = $(SRC_BONUS:.c=.o)

all : $(NAME)

bonus : $(NAME_BONUS)

$(NAME) : $(OBJS)
			@echo "\033[1;32mCOMPILING!\033[0m"
			@cc $(CFLAGS) $(OBJS) -o $(NAME)
			@echo "\033[1;32mDONE \033[0m"

$(NAME_BONUS) : $(OBJS_BONUS)
		@$(FLAGS) $(OBJS_BONUS) -o $(NAME_BONUS)

.c.o	:
		@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
	
clean :
		@rm -rf $(OBJS)
		@rm -rf $(OBJS_BONUS)
	
fclean : clean
		@rm -rf $(NAME)
		@rm -rf $(NAME_BONUS)
	
re : 	fclean all