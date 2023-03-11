SRC = main.c function.c #...

NAME = 

all: $(NAME)

$(NAME):
    gcc -Wextra -Werror -Wall $(SRC) -o $(NAME)

clean:

fclean: clean
    rm $(NAME)

re: fclean all