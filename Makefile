# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/28 18:39:13 by zchtaibi          #+#    #+#              #
#    Updated: 2024/04/28 18:39:14 by zchtaibi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        := push_swap
CC        := cc
FLAGS    := -Wall -Wextra -Werror

SRCS        :=       push_swap.c \
                          check_args.c \
                          index_stack.c \
                          utils1.c \
						   libft/ft_atoi.c \
                          libft/ft_isdigit.c \
                          libft/ft_putchar_fd.c \
                          libft/ft_putendl_fd.c \
                          libft/ft_putnbr_fd.c \
                          libft/ft_putstr_fd.c \
                          libft/ft_split.c \
							libft/ft_strjoin.c \
							libft/ft_strlcpy.c \
                          libft/ft_strdup.c \
                          libft/ft_strlen.c \
                          libft/ft_strncmp.c \
						  libft/ft_memcpy.c \
						  libft/ft_strlcat.c \
						  libft/ft_memset.c \


                          
OBJS        := $(SRCS:.c=.o)

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}


${NAME}:	${OBJS}
			${CC} ${FLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			@ ${RM} *.o */*.o */*/*.o

fclean:		clean
			@ ${RM} ${NAME} ${BNAME}

re:			fclean all

.PHONY:		all clean fclean re