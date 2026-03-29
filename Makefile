# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stmuller <stmuller@student.42vienna.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/19 23:30:07 by stmuller          #+#    #+#              #
#    Updated: 2026/03/19 23:30:08 by stmuller         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap
CC := cc
CFLAGS := -Wall -Werror -Wextra
CFILES := grandmaster.c error.c hard_sort.c index.c node_utils.c parsing.c
OFILES := $(CFILES: .c=.o)
HEAD := push_swap.h
LIBFT := ./libft/libft.a

all: $(NAME)

$(NAME): $(OFILES) $(LIBFT)
	$(CC) $(CFLAGS) $(OFILES) $(LIBFT) -o $(NAME)

$(LIBFT):
	@make -c ./libft

%.o: %.c $(HEAD)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@make -C ./libft clean
	@rm -rf $(OFILES)

fclean: clean
	@make -C ./libft fclean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
