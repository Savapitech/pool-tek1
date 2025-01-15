##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Makefile to build project
##

NAME	=	libmy.a

SRCS = $(wildcard *c)

OBJS	=	$(SRCS:.c=.o)

CC = gcc

CFLAGS = -c

all:  $(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)
	cp my.h ../../include
	cp libmy.a ../


clean:
	$(RM) *.o
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
