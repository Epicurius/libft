# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/23 13:48:12 by nneronin          #+#    #+#              #
#    Updated: 2021/05/08 15:06:03 by nneronin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED				:= "\e[0;31m"
GREEN			:= "\e[0;32m"
YELLOW			:= "\e[0;33m"
BLUE			:= "\e[0;34m"
MAGENTA			:= "\e[0;35m"
CYAN			:= "\e[0;36m"
RESET			:= "\e[0m"

NAME = libpf.a
LIBFT = libft
IDIR = .
DIR_S = srcs
SOURCES = ft_printf.c \
			pf_undefined.c \
			pf_options.c \
			pf_padding.c \
			pf_buffer.c \
			pf_color.c \
			pf_flags.c \
			pf_str.c \
			pf_nbr.c \
			pf_float.c \
			pf_nbr_base.c \

SRCS = $(addprefix $(DIR_S)/,$(SOURCES))
OBJS = $(SOURCES:.c=.o)
CFLAGS = -Wall -Wextra -Werror -I $(IDIR) -I ../libft

all: $(NAME)
	@printf $(CYAN)"[INFO]	$(NAME) ready!\n"$(RESET)

$(NAME): $(SRCS)
	@gcc -c $(SRCS) $(CFLAGS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@/bin/rm -f $(OBJS)
	@printf $(GREEN)"Compiling $(NAME)\n"$(RESET)

clean:
	@/bin/rm -f $(OBJS)
	@printf $(CYAN)"[INFO]	$(NAME) cleaned\n"$(RESET)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: fclean re norme all clean
