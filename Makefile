NAME = libftprintf.a
HEADER = ft_printf.h
SRC	= ft_printf.c \
		parsing.c \
		utils.c \
		type.c \
		type_hex.c \

OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror
AR = ar -rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $?

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
