NAME = ft_printf.a

SRC = $(wildcard *.c)
OBJS = $(SRC: .c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar -cr $(NAME) $(OBJS)

%.c : %.o
	$(cc) $(CFLAGS) $(INC) -c $< -o $@ -I./

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME) $(OBJS)

re: fclean all

.PHONY: clean, fclean, re, all
