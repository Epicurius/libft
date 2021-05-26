# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/26 13:35:55 by nneronin          #+#    #+#              #
#    Updated: 2021/05/26 13:40:10 by nneronin         ###   ########.fr        #
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
	@make -C ./libbxpm

clean:
	@make clean -C ./libft
	@make clean -C ./libpf
	@make clean -C ./libtp
	@make clean -C ./libbxpm

fclean:
	@make fclean -C ./libft
	@make fclean -C ./libpf
	@make fclean -C ./libtp
	@make fclean -C ./libbxpm

re: fclean all

.PHONY: clean, all, fclean, re
