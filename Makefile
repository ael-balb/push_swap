# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 16:28:44 by ael-balb          #+#    #+#              #
#    Updated: 2023/05/03 16:34:31 by ael-balb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
FLAGS = -Wall -Wextra -Werror

SRC =  

OBJS = $(SRC:.c=.o)
all : $(NAME)
$(NAME) :
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)
fclean : clean
	rm -rf $(NAME)
re : fclean all