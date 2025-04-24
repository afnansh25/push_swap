# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codespace <codespace@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/12 12:01:21 by codespace         #+#    #+#              #
#    Updated: 2025/04/24 13:30:54 by codespace        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = main.c init.c ft_atoi.c check_errors.c ft_split.c push.c swap.c rotate.c rrotate.c sorts.c sort_utils.c str_utils.c

OBJ = $(SRC:.c=.o)

CC = cc

FLAGS = -Wall -Werror -Wextra

AR = ar -rcs

DEL = rm -rf

all: $(NAME)

# $(NAME): $(OBJ)
# 	$(AR) $@ $(OBJ)
$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@
	
clean: 
	$(DEL) $(OBJ)

fclean: clean
	$(DEL) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
