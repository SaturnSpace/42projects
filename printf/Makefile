NAME = libftprintf.a

SRCS = 						ft_printf.c\
						ft_printchar.c\
						ft_printstr.c\
						ft_printptr.c\
						ft_printint.c\
						ft_printunsi.c\
						ft_printhexa.c\
						ft_putstr_fd\

OBJS =		${SRCS:.c=.o}

HEADER = 	libftprintf.h

NAME =		libftprintf.a

CFLAGS =	-Wall -Wextra -Werror

all:		${NAME}

${NAME}:	${OBJS}
	ar rc ${NAME} ${OBJS}

.c.o:	
	gcc ${CFLAGS} -c $^ -include ${HEADER}

clean:
	rm -rf ${OBJS}

fclean:		clean
	rm -rf ${NAME}

re:		fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -sostartfiles -shared -o libftprintf.so $(OBJ)
