NAME = push_swap

SRCS = source/operations/push/pa.c source/operations/push/pb.c \
 source/operations/rotate/ra.c source/operations/rotate/rb.c source/operations/rotate/rr.c \
 source/operations/rotate_reverse/rra.c source/operations/rotate_reverse/rrb.c source/operations/rotate_reverse/rrr.c \
 source/operations/swap/sa.c source/operations/swap/sb.c source/operations/swap/ss.c \
 source/util/init_arg.c source/main.c \
 source/util/init_stack.c source/list/ps_lstadd_back.c source/list/ps_lstlast.c source/list/ps_lstnew.c \
 source/check/check_sort.c source/check/reverse_sorted.c source/check/target_max.c source/check/target_min.c \
 source/check/cheapest.c source/check/target_node.c source/list/ps_ft_lstsize.c source/sort/sort.c source/sort/sort_reverse.c

OBJS = ${SRCS:.c=.o}

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_PATH = libft
INC_LIB = -L$(LIBFT_PATH) -lft

all: ${NAME}

$(NAME): $(OBJS)
	make -C $(LIBFT_PATH)
	$(CC) $(CFLAGS) $(OBJS) $(INC_LIB) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	make -C $(LIBFT_PATH) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_PATH) fclean

re: fclean all

.PHONY: all clean fclean re
