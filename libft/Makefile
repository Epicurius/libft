# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/18 11:13:47 by nneronin          #+#    #+#              #
#    Updated: 2021/04/26 10:18:16 by nneronin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
IDIR = .
CDIR = mem is put str lst math rand
SRCS := $(shell find $(CDIR) -type f | grep -E "\.c$$")
OBJS = $(notdir $(SRCS:.c=.o))
CFLAGS = -Wall -Wextra -Werror -I $(IDIR)

all: $(NAME)

$(NAME): $(SRCS)
	@gcc -c $(SRCS) $(CFLAGS)
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
