CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
SRC = programm.c push_swap_check.c \
	sort.c sort1.c sort2.c \
	push_swap_util1.c push_swap_util2.c push_swap_utils.c \
	rules1.c rules2.c rules3.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re