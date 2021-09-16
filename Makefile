# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danimart <danimart@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/15 17:21:01 by danimart          #+#    #+#              #
#    Updated: 2021/09/16 13:56:11 by danimart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft
CC=gcc
CFLAGS=-Wall -Werror -Wextra
C_FILES=$(shell find . -type f -name "*.c")
O_FILES=$(C_FILES:.c=.o)

all: $(NAME)
$(NAME): $(O_FILES)
	ar rc $(NAME).a $(O_FILES)
clean:
	rm -rf $(O_FILES)
fclean: clean
	rm -rf $(NAME).a
re: fclean $(NAME)
.PHONY: all clean fclean re