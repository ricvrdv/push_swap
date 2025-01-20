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

$(LIBFT):
	@make -C ./libft

all:	$(NAME) $(LIBFT)

$(NAME):	$(OBJS) $(LIBFT)
	ar rcs $(NAME) $(OBJS) $(LIBFT)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(EXEC)
	@make clean -C ./libft

fclean:	clean
	@$(RM) $(NAME)
	@$(RM) $(LIBFT)

re: fclean all

.PHONY:	all clean fclean re