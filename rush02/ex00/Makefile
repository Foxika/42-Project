# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/31 09:29:59 by ydang             #+#    #+#              #
#    Updated: 2016/07/31 09:47:47 by ydang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = rush-2

SRC0 = srcs/rush00.c srcs/main.c srcs/ft_putchar.c srcs/atoi.c

SRC1 = srcs/rush01.c srcs/main.c srcs/ft_putchar.c srcs/atoi.c

SRC2 = srcs/rush02.c srcs/main.c srcs/ft_putchar.c srcs/atoi.c

SRC3 = srcs/rush03.c srcs/main.c srcs/ft_putchar.c srcs/atoi.c

SRC4 = srcs/rush04.c srcs/main.c srcs/ft_putchar.c srcs/atoi.c

HEADER_DIR = includes

FLG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(FLG) $(SRC0) -o rush-00 -I$(HEADER_DIR)
	$(CC) $(FLG) $(SRC1) -o rush-01 -I$(HEADER_DIR)
	$(CC) $(FLG) $(SRC2) -o rush-02 -I$(HEADER_DIR)
	$(CC) $(FLG) $(SRC3) -o rush-03 -I$(HEADER_DIR)
	$(CC) $(FLG) $(SRC4) -o rush-04 -I$(HEADER_DIR)

clean:
	rm -f $(NAME) rush-00 rush-01 rush-02 rush-03 rush-04

fclean: clean

re: fclean all
