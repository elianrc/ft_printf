# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erc <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/03 08:29:24 by erc               #+#    #+#              #
#    Updated: 2020/08/14 23:36:46 by erc              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a

SRCS=./libft/ft*.c ft*.c pf*.c

OBJS=ft*.o pf*.o

INCLUDES=./

all:$(NAME)
	@echo Compiling $(NAME)...

$(NAME):
	@gcc -g3 -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

bonus: re

clean:
	@echo Deleting Objects...
	@/bin/rm -f $(OBJS)

fclean: clean
	@echo Deleting $(NAME)...
	@/bin/rm -f $(NAME)

re: fclean all
