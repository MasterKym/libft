# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkhalid <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 11:20:19 by mkhalid           #+#    #+#              #
#    Updated: 2021/11/03 12:09:56 by mkhalid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
AR = ar
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = rc

SRCS = ft_isalpha.c

OBJS = $(SRCS:%.c=%.o)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS) -I libft.h/
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
