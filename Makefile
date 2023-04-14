# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnazario <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 10:51:59 by tnazario          #+#    #+#              #
#    Updated: 2023/04/13 10:52:16 by tnazario         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printfaux.c \
			ft_printfaux2.c \
			ft_printf.c

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	echo ".o and .a created successfully"

clean:
		rm -f $(OBJ)
		echo ".o clean"

fclean: clean
		rm -f $(NAME)
		echo ".a clean"
.SILENT:

re: fclean all

.PHONY: all clean fclean re
