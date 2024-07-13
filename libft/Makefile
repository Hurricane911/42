Library		= libft

CFILES = $(wildcard *.c)
OFILES = $(CFILES:.c=.o)

Compiler	= cc
CmpFlags	= -Wall -Wextra -Werror

OUTN = $(Library).a
NAME = $(OUTN)

all: $(NAME)

$(NAME): $(OFILES)
	ar -cr $(OUTN) $(OFILES)

%.o: %.c
	$(Compiler) $(CmpFlags) -c $< -o $@ -I./

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re

# this is a test
