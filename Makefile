# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haguezou <haguezou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 11:12:08 by haguezou          #+#    #+#              #
#    Updated: 2022/11/07 13:52:39 by haguezou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC =  ft_printf.c ft_putnbr.c ft_putunbr.c  ft_putchar.c ft_putstr.c ft_puthexa.c ft_puthexa_pointer.c
OBJ = $(SRC:.c=.o)

HEADER = ft_printf.h

all : $(NAME)

%.o : %.c $(HEADER)
	$(CC) -c $< $(CFLAGS)

$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean : 
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re: fclean all
