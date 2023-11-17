NAME = libft.a

SRCS = ft_atoi.c\
			ft_bzero.c\
			ft_calloc.c\
			ft_isalpha.c\
			ft_isdigit.c\
			ft_isascii.c\
			ft_isalnum.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_memset.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_memchr.c\
			ft_strnstr.c\
			ft_memcmp.c\
			ft_strdup.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\

OBJS =          ${SRCS:.c=.o}

HEADER =        libft.h

NAME =          libft.a

CFLAGS =        -Wall -Wextra -Werror

all:            ${NAME}

${NAME}:        ${OBJS} ${OBJS_BONUS}
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

.PHONY:         all clean fclean re
