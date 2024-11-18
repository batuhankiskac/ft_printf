# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: batuhankiskac <batuhankiskac@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 14:59:48 by batuhankisk       #+#    #+#              #
#    Updated: 2024/11/18 20:56:59 by batuhankisk      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_print.c \
ft_print_func.c

OBJS = $(SRCS:.c=.o)

all:
	$(CC) $(CFLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
