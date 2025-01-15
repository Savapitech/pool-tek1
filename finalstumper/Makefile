##
## EPITECH PROJECT, 2023
## miniprintf
## File description:
## ./Makefile
##

NAME	=	rush3

SRCS = $(wildcard src/*.c)

CC = gcc

all:  $(NAME)

$(NAME):	$(OBJS)
	$(CC) -Wall -Wextra $(SRCS) -Iinclude -o $(NAME)

clean:
	$(RM) *.o

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
