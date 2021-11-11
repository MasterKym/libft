# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkhalid <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 11:20:19 by mkhalid           #+#    #+#              #
#    Updated: 2021/11/10 12:23:53 by mkhalid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
AR = ar
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = rc

SRCS = ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_strlen.c \
	   ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strncmp.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strnstr.c \
	   ft_atoi.c \
	   ft_calloc.c \
	   ft_strdup.c \
	   ft_substr.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_split.c \
	   ft_itoa.c \
	   ft_strmapi.c \
	   ft_striteri.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c

# THESE NEED TO BE REMOVED

SRCS_BNS = ft_lstnew.c


OBJS = $(SRCS:.c=.o)
OBJS_BNS = $(SRCS_BNS:.c=.o)

INC = libft.h

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@ 

all: $(NAME)

bonus: $(BONUS)
	$(CC) $(CFLAGS) -c $(SRCS) $(SRCS_BNS) $(INC)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS) $(OBJS_BNS)
	
clean:
	rm -f $(OBJS) $(OBJS_BNS)

fclean: clean
	rm -f $(NAME)

re: fclean all
