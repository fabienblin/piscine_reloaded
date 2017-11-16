# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fablin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 11:25:26 by fablin            #+#    #+#              #
#    Updated: 2017/11/10 11:24:01 by fablin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

SOURCES = $(addprefix ./srcs/, $(CFILES))

OBJ = $(CFILES:.c=.o)

INCLUDES = ./includes/

all : $(NAME)

$(NAME) :
	gcc -Wall -Wextra -Werror -c $(SOURCES) -I $(INCLUDES)
	ar rc $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
