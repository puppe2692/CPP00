# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 21:18:35 by nwyseur           #+#    #+#              #
#    Updated: 2023/07/26 18:20:49 by nwyseur          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= megaphone

SRCS	:= megaphone.cpp \

OBJS		:= ${SRCS:.cpp=.o}

CC			:= c++
CC_FLAGS	= -std=c++98 -Wall -Wextra -Werror

RM			:= rm -f

%.o : %.c
			${CC} ${CC_FLAGS} -c $< -o $@

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CC_FLAGS} -o ${NAME} ${OBJS} 
			@echo "$(GREEN)$(NAME) created!$(DEFAULT)"

clean:
			${RM} ${OBJS}
			@echo "$(YELLOW)object files deleted!$(DEFAULT)"

fclean:		clean
			${RM} ${NAME}
			@echo "$(RED)all deleted!$(DEFAULT)"

re:			fclean all

.PHONY: 	all clean fclean re

#COLORS
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
DEFAULT = \033[0m
