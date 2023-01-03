# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsebille <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 14:48:44 by hsebille          #+#    #+#              #
#    Updated: 2023/01/03 17:30:45 by hsebille         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang
CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

SRCS = push_swap.c swaps.c pushes.c utils.c rotates.c \
	   reverse_rotates.c sortings.c \

OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) $(CFAGS) -g -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	make -C ./ft_printf && make -C ./libft 
	$(CC) $(CFLAGS) -L ft_printf -L libft -I ft_printf -I libft $(OBJS) -l:libftprintf.a -l:libft.a -o $(NAME)


all: $(NAME)

clean:
	/bin/rm -f $(OBJS)
	$(MAKE) -C ./libft clean
	$(MAKE) -C ./ft_printf clean

fclean: clean
	/bin/rm -f $(NAME)
	$(MAKE) -C ./libft fclean
	$(MAKE) -C ./ft_printf fclean

re: fclean all
