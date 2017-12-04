# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfontain <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/18 10:59:01 by tfontain          #+#    #+#              #
#    Updated: 2017/11/18 20:02:50 by tfontain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	@make -C checker
	@make -C push_swap
	@echo " - Making"

clean:
	@make clean -C checker
	@make clean -C push_swap
	@echo " - Cleaning objs"
	@rm -f $(OBJS)

fclean: clean
	@make fclean -C checker
	@make fclean -C push_swap
	@echo " - Cleaning"
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
