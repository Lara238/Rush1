##
## Makefile for  in /home/mystik/Projects/Rush1/Step1/my_archive
## 
## Made by Mystik
## Login   <tom.gardelle@epitech.eu>
## 
## Started on  Sat Mar  4 11:45:02 2017 Mystik

NAME	=	my_archive

SRC	=	main.c		\
		my_unarchive.c

OBJ	=	$(SRC:.c=.o)

all:	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
