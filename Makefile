NAME = libftprintf.a
HEADER = ft_printf.h
CC = gcc
SRC	= ft_printf.c \
		parcing.c \
		utils.c \
		type.c \
		type_hex.c \

OBJ = $(SRC:.c=.o)
FLAGC = -Wall -Wextra -Werror -I.$(HEADER)
AR = ar -rcs

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(AR) $(NAME) $(OBJ) $(HEADER)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean: rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 