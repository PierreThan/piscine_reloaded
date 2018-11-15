# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pthan <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/15 14:30:14 by pthan             #+#    #+#              #
#    Updated: 2018/11/15 15:37:24 by pthan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RM	= rm -rf
NAME	= libft.a
SRCS	= srcs/ft_strlen.c \
	  srcs/ft_strcmp.c\
	  srcs/ft_putchar.c\
	  srcs/ft_putstr.c\
	  srcs/ft_swap.c
OBJ	= ft_strlen.o\
	  ft_strcmp.o\
	  ft_putchar.o\
	  ft_putstr.o\
	  ft_swap.o

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ):
	gcc -c $(SRCS)
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all
