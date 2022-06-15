NAME		=	push_swap

NAME_BONUS	=	checker

HEADER 		= 	push_swap.h

HEADER_B 	= 	push_swap_bonus.h

CC			=	gcc -g
RM			=	rm -f

CFLAGS		=	-Wall -Wextra -Werror

SRCS		=	check.c \
				ft_add_back.c\
				important_func.c \
				libft.c \
				move.c \
				push_swap.c \
				put_index.c \
				sorting.c \

SRCS_BONUS	=	check_bonus.c \
				checker_bonus.c \
				ft_add_back_bonus.c\
				important_func_bonus.c \
				libft_bonus.c \
				move_bonus.c \
				push_swap_bonus.c \
				put_index_bonus.c \
				sorting_bonus.c \

OBJS_BONUS	=	${SRCS_BONUS:.c=.o}

OBJS		=	${SRCS:.c=.o}

%.o: %.c	${HEADER} ${HEADER_BONUS}
			${CC} ${CFLAGS} -c $< -o $@

${NAME}:		Makefile push_swap.h ${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

${NAME_BONUS}:	Makefile checker.h ${OBJS_BONUS}
			${CC} ${CFLAGS} ${OBJS_BONUS} -o ${NAME_BONUS}

all:			${NAME} ${HEADER}

bonus:			${NAME_BONUS} ${HEADER_BONUS}

clean:
				${RM} ${OBJS} ${OBJS_BONUS}

fclean:			clean
				${RM} ${NAME} ${NAME_BONUS}

re:				fclean all

.PHONY: 		 all re fclean bonus clean
