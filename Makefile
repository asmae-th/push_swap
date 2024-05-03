CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
NAME_BONUS = checker
SRC = push_swap.c push_swap_check.c \
	sort.c sort1.c sort2.c \
	push_swap_util1.c push_swap_util2.c push_swap_utils.c \
	rules1.c rules2.c rules3.c utilis.c
SRC_BONUS = checker.c checker_utils.c push_swap_check.c \
	sort.c sort1.c sort2.c utilis.c\
	push_swap_util1.c push_swap_util2.c push_swap_utils.c \
	rules1.c rules2.c rules3.c get_next_line.c get_next_line_utils.c
OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

bonus:  $(NAME_BONUS)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

$(NAME_BONUS): $(OBJ_BONUS)
	$(CC) $(CFLAGS) -o $(NAME_BONUS) $(OBJ_BONUS)
	
clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME) $(NAME_BONUS)

re: fclean all

.PHONY: all clean fclean re