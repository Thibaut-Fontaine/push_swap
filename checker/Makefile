# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfontain <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/18 18:09:36 by tfontain          #+#    #+#              #
#    Updated: 2017/11/18 19:53:50 by tfontain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker

CFLAGS = -Wall -Wextra -Werror

CC = clang

INCLUDES_PATH = includes/

SRCS_PATH = srcs/

SRCS_NAME = main.c\

SRCS = $(addprefix $(SRCS_PATH), $(SRCS_NAME))

OBJS_PATH = objs/

OBJS_NAME = $(SRCS_NAME:.c=.o)

OBJS = $(addprefix $(OBJS_PATH), $(OBJS_NAME))

LIBRARY_PATH = ../libft/

LIBRARY = -lm -L $(LIBRARY_PATH) -lft

MFLAGS = -j

all: odir
	@$(MAKE) $(MFLAGS) $(NAME)

$(NAME): $(OBJS)
	@make $(MFLAGS) -C $(LIBRARY_PATH)
	@echo " - Making $(NAME)"
	@$(CC) $(CFLAGS) -o $(NAME) $^ $(LIBRARY)

$(OBJS_PATH)%.o: $(SRCS_PATH)%.c
	@echo " - Compiling $<"
	@$(CC) $(CFLAGS) -o $@ -c $< -I$(INCLUDES_PATH)

odir:
	@mkdir -p $(OBJS_PATH)

clean:
	@make clean -C $(LIBRARY_PATH)
	@echo " - Cleaning objs"
	@rm -f $(OBJS)

fclean: clean
	@make fclean -C $(LIBRARY_PATH)
	@echo " - Cleaning executable"
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re odir
