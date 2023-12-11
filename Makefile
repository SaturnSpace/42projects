NAME = libftprintf.a

SRCS = ft_printf.c\
        ft_printchar.c\
        ft_printstr.c\
        ft_printptr.c\
        ft_printint.c\
        ft_printunsi.c\
        ft_printhexa.c\
        ft_putstr_fd.c\

OBJS = ${SRCS:.c=.o}

HEADER = libftprintf.h

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

all: ${NAME}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

%.o:		%.c ${HEADER}
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	rm -rf ${OBJS}

fclean:        clean
	rm -rf ${NAME}

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -sostartfiles -shared -o libftprintf.so $(OBJ)
