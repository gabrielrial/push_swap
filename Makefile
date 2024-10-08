NAME = push_swap

SRCS =	source/check/check_sort.c \
	source/sort/last_sort.c source/sort/sort_big.c source/sort/sort_list.c source/sort/sort_three.c source/sort/sort.c  source/sort/move.c\
	source/target/cheapest.c source/target/target_min.c source/target/target_node.c \
	source/operations/push/pa.c source/operations/push/pb.c \
	source/operations/rotate/ra.c source/operations/rotate/rb.c source/operations/rotate/rr.c \
	source/operations/rotate_reverse/rra.c source/operations/rotate_reverse/rrb.c source/operations/rotate_reverse/rrr.c \
	source/operations/swap/sa.c source/operations/swap/sb.c source/operations/swap/ss.c \
	source/util/free_list.c source/util/init_arg.c source/util/init_stack.c source/util/ps_ft_lstsize.c source/util/ps_lstadd_back.c source/util/ps_lstlast.c source/util/ps_lstnew.c \
	source/push_swap.c 
	
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
