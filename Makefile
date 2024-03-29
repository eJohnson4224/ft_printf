NAME=libftprintf.a
SOURCES=char_print.c str_print.c num_print.c \
hex_print.c ptr_print.c ft_printf.c  
OBJECTS=$(SOURCES:.c=.o)
CC=gcc
CFLAGS=-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) -c $(CFLAGS) $(SOURCES)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
