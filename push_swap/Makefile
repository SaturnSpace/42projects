NAME = push_swap.a

SRCS = 				push_swap.c\
					push_swap_utils.c\
					push_swap_checker.c\

OBJS =          ${SRCS:.c=.o}

HEADER =        push_swap.h

NAME =          push_swap.a

CFLAGS =        -Wall -Wextra -Werror

all:            ${NAME}

${NAME}:        ${OBJS}
	ar rc ${NAME} ${OBJS}

bonus:          ${OBJS_BONUS}
	ar rc ${NAME} ${OBJS_BONUS}

.c.o:
	gcc ${CFLAGS} -c $^ -include ${HEADER}

clean:
	rm -rf ${OBJS} ${OBJS_BONUS}

fclean:         clean
	rm -rf ${NAME}

re:             fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)