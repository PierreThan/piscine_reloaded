# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pthan <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/15 14:30:14 by pthan             #+#    #+#              #
#    Updated: 2018/11/15 15:21:05 by pthan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RM		= rm -rf
NAME	= ft_display_file
SRC		= ft_display_file.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra $(SRC) -o $(NAME)

clean:
	$(RM) *.o
fclean: clean
	$(RM) $(NAME)
re: fclean all
