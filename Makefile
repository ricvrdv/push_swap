# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/21 11:00:36 by rjesus-d          #+#    #+#              #
#    Updated: 2025/01/21 12:25:44 by rjesus-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

LIBFT = ./libft/libft.a

RM = rm -f

SRCS = srcs/commands/push.c \
			srcs/commands/reverse_rotate.c \
			srcs/commands/rotate.c \
			srcs/commands/sort_stacks.c \
			srcs/commands/sort_three.c \
			srcs/commands/swap.c \
			srcs/push_swap/handle_errors.c \
			srcs/push_swap/init_a_to_b.c \
			srcs/push_swap/init_b_to_a.c \
			srcs/push_swap/push_swap.c \
			srcs/push_swap/stack_init.c \
			srcs/push_swap/stack_utils.c

OBJS = $(SRCS:.c=.o)

all:	$(LIBFT) $(NAME)

$(LIBFT):
	@make -C ./libft

$(NAME):	$(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	@make clean -C ./libft

fclean:	clean
	$(RM) $(NAME)
	@make fclean -C ./libft

re: fclean all

.PHONY:	all clean fclean re
