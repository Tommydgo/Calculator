CC = gcc

SRC =   src/main.c \
		src/error_handling.c \
		src/calculator.c

OBJ = $(SRC:.c=.o)

NAME = calculator

all: $(NAME)

debug:
	$(CC) -g3 -Wall -Wextra $(SRC) -o "debug_"$(NAME) -Iincludes

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) -Iincludes

%.o: %.c
	$(CC) -c $< -o $@ -Iincludes

clean:
	rm -f $(OBJ)
	rm -f *.gcda *.gcno *.pch

fclean: clean
	rm -f $(NAME) "debug_"$(NAME)

re: fclean all
