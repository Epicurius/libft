# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/18 11:13:47 by nneronin          #+#    #+#              #
#    Updated: 2020/09/26 12:20:40 by nneronin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_DIR	= .
INC_DIR = .
OBJ_DIR	= ./obj
SRCS := $(shell find $(SRC_DIR) -type f | grep -E "\.c$$")

OBJ = $(SRCS:.c=.o)
OBJS = $(notdir $(OBJ))
FLAGS = -Wall -Wextra -Werror -I$(INC_DIR)

all: $(NAME)

$(NAME):
	@gcc -c $(SRCS) $(FLAGS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@/bin/rm -f $(OBJS)
	@echo "libft was successfully created."

clean:
	@/bin/rm -f $(OBJS)
	@echo "$(NAME) was cleaned."

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean, all, fclean, re
