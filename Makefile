CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap.a
AR = ar rcs
SRC = push_swap_utils.c push_swap.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
fclean :
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
