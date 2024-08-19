SRCS	= libft/*.c
OBJS	= ${SRCS: .c=.o}

libft.a: ${OBJS}
	gcc -Wall -Wextra -Werror -o libft.a ${OBJS}

clean: ${OBJS}
	rm ${OBJS}

re: clean libft.a
