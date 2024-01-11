# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzadakan <mzadakan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/25 10:47:37 by mzadakan          #+#    #+#              #
#    Updated: 2023/07/27 16:38:46 by mzadakan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c ft_putchar.c ft_putnbr.c ft_int.c ft_digit.c \
		ft_putstr.c ft_string.c ft_strlen.c ft_type.c ft_uint.c \
		ft_lower_hex.c ft_upper_hex.c ft_pointer.c ft_uputnbr.c \

OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) rm -f a.out
	
re: fclean all

.PHONY: all clean fclean re