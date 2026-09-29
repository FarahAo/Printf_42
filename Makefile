# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fabo-ome <fabo-ome@learner.42.tech>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/29 14:10:04 by fabo-ome          #+#    #+#              #
#    Updated: 2026/09/29 14:10:07 by fabo-ome         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

all : $(NAME)

CC = cc

CFLAGS = -Wall -Wextra -Werror 

CFILES = ft_printf.c \
	 ft_check_str.c\
	 print_char.c \
	 print_string.c \
	print_pointer.c \
       print_integer.c \	
	print_unsigned.c \
	print_lowerhexa.c \
	print_upperhexa.c \

OFILES = $(CFILES:.c=.o)

$(NAME) : $(OFILES)
	ar rcs $@ $^ 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OFILES)

fclean : clean
	rm -f $(NAME)

re : fclean all
