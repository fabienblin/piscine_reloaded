# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fablin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 11:25:26 by fablin            #+#    #+#              #
#    Updated: 2017/11/10 11:32:09 by fablin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CFILES = display_file.c main.c ft_putstr.c

all : $(NAME)

$(NAME) :
	gcc -Wall -Wextra -Werror $(CFILES) -o $(NAME) -I ./

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
