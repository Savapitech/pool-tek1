##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Makefile to build project
##

NAME	=	do-op

SRCS = $(wildcard *c)

CC = gcc

CFLAGS = -W -Wall -Wextra

LIBFLAGS = -I../include -L../lib/my -lmy

all:  $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) $(LIBFLAGS) -o $(NAME)

clean:
	$(RM) *.o
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
