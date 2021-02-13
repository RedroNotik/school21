ISRC	= ft.h

SRCS	= ft_putnbr.c do_op.c ft_operator.c

OBJS	= ${SRCS:.c=.o}

NAME	= do-op

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror


all:	${OBJS}
		${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}


.PHONY: all clean fclean
