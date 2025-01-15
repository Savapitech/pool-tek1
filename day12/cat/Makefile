##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Makefile to build project
##

NAME	=	cat

SRCS = $(wildcard *c)

CC = gcc

CFLAGS = -W -Wall -Wextra

LIBFLAGS = -I../include -L../lib/my -lmy

all:  $(NAME)

$(NAME):
	make -C ../lib/my/
	$(CC) $(CFLAGS) $(SRCS) $(LIBFLAGS) -o $(NAME)

clean:
	make -C ../lib/my/ clean
	$(RM) *.o
	$(RM) $(OBJS)

fclean:	clean
	make -C ../lib/my/ fclean
	$(RM) $(NAME)

re:	fclean all

tests_run:
	make -C ../lib/my/
	$(CC) $(CFLAGS) $(SRCS) ../tests/*.c -lcriterion $(LIBFLAGS) -o tests
