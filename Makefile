# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/26 13:35:55 by nneronin          #+#    #+#              #
#    Updated: 2021/06/19 16:08:55 by nneronin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED				:= "\e[0;31m"
GREEN			:= "\e[0;32m"
YELLOW			:= "\e[0;33m"
BLUE			:= "\e[0;34m"
MAGENTA			:= "\e[0;35m"
CYAN			:= "\e[0;36m"
RESET			:= "\e[0m"

all:
	@make -C ./libft
	@make -C ./libpf
	@make -C ./libtp

clean:
	@make clean -C ./libft
	@make clean -C ./libpf
	@make clean -C ./libtp

fclean:
	@make fclean -C ./libft
	@make fclean -C ./libpf
	@make fclean -C ./libtp

re: fclean all

.PHONY: clean, all, fclean, re
