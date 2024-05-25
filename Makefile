# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pzau <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/24 12:15:31 by pzau              #+#    #+#              #
#    Updated: 2024/05/24 12:15:34 by pzau             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =   ft_printf.c \
		write_%.c	\
		write_c.c	\
		write_d.c	\
		write_i.c	\
		write_p.c	\
		write_s.c	\
		write_u.c	\
		write_x.c	\
		write_X.c	\

OBJS = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar crs

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
