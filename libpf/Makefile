# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/23 13:48:12 by nneronin          #+#    #+#              #
#    Updated: 2020/09/24 16:47:08 by nneronin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libpf.a
LIBFT = libft
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

all: $(NAME)

$(NAME):
	@gcc -c $(SRCS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@/bin/rm -f $(OBJS)
	@echo "libpf was successfully created."

clean:
	@/bin/rm -f $(OBJS)
	@echo "$(NAME) was cleaned."

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: fclean re norme all clean
