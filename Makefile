NAME =	push_swap

CC =	gcc

DEL =	/bin/rm -f

SRCS =  ft_atoi.c \
		if_only_3.c \
		if_only_5.c \
		if_100.c \
		move_a.c \
		move_b.c \
		push_swap.c \
		swap.c \
		utils.c 

OBJS    = ${SRCS:.c=.o}

CFLAGS    = -Wall -Werror -Wextra -g

CC        = gcc

RM        = rm -f

all:    ${NAME}

$(NAME):	${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
		${RM} ${OBJS}

fclean:        clean
			${RM} ${NAME}
	
re:	fclean all
