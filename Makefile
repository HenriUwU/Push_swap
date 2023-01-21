# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsebille <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 14:48:44 by hsebille          #+#    #+#              #
#    Updated: 2023/01/21 15:01:32 by hsebille         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang
CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

NAME_BONUS = checker

SRCS = push_swap.c swaps.c pushes.c utils.c rotates.c \
	   reverse_rotates.c sortings.c utils_bis.c sortings_bis.c \

BONUS = get_next_line.c checker.c utils_bis.c utils.c move_bonus.c \
		move2_bonus.c utils_bonus.c sortings.c reverse_rotates.c \
		rotates.c swaps.c pushes.c \

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(BONUS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -g -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	make -C ./libft 
	$(CC) $(CFLAGS) -L libft -I libft $(OBJS) -l:libft.a -o $(NAME)

$(NAME_BONUS): $(OBJS_BONUS)
	$(CC) $(CFLAGS) -g -L libft -I libft $(OBJS_BONUS) -l:libft.a -o $(NAME_BONUS) 

all: $(NAME)

bonus: $(NAME_BONUS)

clean:
	/bin/rm -f $(OBJS) $(OBJS_BONUS)
	$(MAKE) -C ./libft clean

fclean: clean
	/bin/rm -f $(NAME) $(NAME_BONUS)
	$(MAKE) -C ./libft fclean

re: fclean all
