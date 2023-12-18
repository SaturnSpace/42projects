NAME = libftprintf.a

SRCS = ft_printf.c \
		ft_putcharlen.c\
		ft_putnbrlen.c\
		ft_putstrlen.c\
		ft_toupper.c\
		ft_unsilen.c\
		ft_hexalen.c\
		ft_ptrlen.c\

OBJS = ${SRCS:.c=.o}

HEADER = ft_printf.h

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

all: ${NAME}

${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS}

%.o: %.c ${HEADER}
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
		rm -rf ${OBJS}

fclean:        clean
		rm -rf ${NAME}

re: fclean all

so:
		$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
		gcc -sostartfiles -shared -o libftprintf.so $(OBJ)