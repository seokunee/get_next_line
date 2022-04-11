# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seokchoi <seokchoi@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/11 16:21:54 by seokchoi          #+#    #+#              #
#    Updated: 2022/04/11 16:33:01 by seokchoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = get_next_line.c get_next_line_utils.c main.c
CC = gcc
CFLAGS	= -Wall -Wextra -Werror
ifdef !BUF
	BUF = 42
endif

all : 
		${CC} ${CFLAGS} -D BUF=${BUF} ${SRC}
		./a.out	example/test1

norm :
		norminette  -R CheckForbiddenSourceHeader ${SRC}

.PHONY : all norm