##
## Makefile for  in /home/mathias/Bureau/bootstrap
## 
## Made by Mathias
## Login   <mathias.descoin@epitech.eu@epitech.net>
## 
## Started on  Tue Dec  6 14:55:33 2016 Mathias
## Last update Tue Dec  6 14:58:28 2016 Mathias
##

SRC	=	popup.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_popup

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) -lncurses

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
