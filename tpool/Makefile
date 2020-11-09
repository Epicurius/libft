# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/09 10:44:31 by nneronin          #+#    #+#              #
#    Updated: 2020/11/09 13:00:11 by nneronin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= t_pool.a
FLAGS	= -Wall -Wextra -Werror
SRCS	=	init_tpool.c	\
	  		tpool_free.c	\
			tpool.c			\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	@gcc -c $(SRCS) -pthread
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@/bin/rm -f $(OBJS)
	@echo "tpool was successfully created."

clean:
	@/bin/rm -f $(OBJS)
	@echo "$(NAME) was cleaned."

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean, all, fclean, re
