# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erc <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/17 02:15:22 by erc               #+#    #+#              #
#    Updated: 2020/04/17 02:15:39 by erc              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror -c

SOURCES	= ft_atoi_base.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c\
          ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
          ft_isspace.c ft_itoa_base.c ft_itoa.c ft_memccpy.c\
          ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c\
          ft_memset.c ft_numdig.c ft_putchar_fd.c ft_putendl_fd.c\
          ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c\
          ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c\
          ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnew.c\
          ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c\
          ft_tolower.c ft_toupper.c ft_wordcounter.c

SOURCES_B =  ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstadd_back.c\
	     ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c\
	     ft_lstiter.c ft_lstsize.c

OBJETS = $(SOURCES:%.c=%.o)
OBJECTS_B = $(SOURCES_B:%.c=%.o)
INCLUDES=./

all: $(NAME)
$(NAME):
	@$(CC) $(CFLAGS) $(SOURCES) -I$(INCLUDES)
	@ar rc $(NAME) $(OBJETS)
	@ranlib $(NAME)

so:
	@gcc -fPIC $(CFLAGS) libft.h $(SOURCES) $(SOURCES_B)
	@gcc -shared -o libft.so $(OBJETS) $(OBJECTS_B)

bonus:
	@$(CC) $(CFLAGS) $(SOURCES_B)  -I$(INCLUDES)
	@ar rc $(NAME) $(OBJECTS_B)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJETS) $(OBJECTS_B)

fclean: 	clean
	@rm -f $(NAME) libft.so libft.h.gch

re: fclean all

.PHONY:		all clean fclean re bonus
