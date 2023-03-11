NAME = libft.a
SRCS = ft_isalpha.c ft_memcpy.c ft_strlcpy.c ft_isascii.c ft_memmove.c ft_strlen.c \
       ft_bzero.c ft_isdigit.c ft_memset.c \
       ft_isalnum.c ft_isprint.c ft_strlcat.c ft_toupper.c ft_tolower.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re
