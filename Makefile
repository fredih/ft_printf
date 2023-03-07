NAME	:= libftprintf.a
SRCFOLDER := srcs
SRCS := main.c ft_printf.c
OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc libft.a $(OBJS)

$(OBJS): %.o: %.c
	gcc -Wall -Wextra -Werror libft.a -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS)
	rm -f libftprintf.a

re: fclean all

.PHONY = all clean fclean libft.a re

