# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erc <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/03 08:29:24 by erc               #+#    #+#              #
#    Updated: 2020/08/25 14:36:12 by erc              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a

SRCS=./1.libft/ft*.c ./2.ft_printf/pf*.c ./2.ft_printf/ft*.c

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
	@/bin/rm -f $(NAME) ft_printf.h.gch

re: fclean all
