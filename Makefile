NAME	:= libftprintf.a
SRCFOLDER := srcs
SRCS := main.c ft_printf.c ft_putchar_fd.c ft_putstr_fd.c ft_strlen.c ft_itoa.c ft_calloc.c ft_bzero.c ft_memset.c
OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc libftprintf.a $(OBJS) libft.a

$(OBJS): %.o: %.c
	gcc -Wall -Wextra -Werror -c $< -o $@ -lft -L ./

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS)
	rm -f libftprintf.a

re: fclean all

.PHONY = all clean fclean libftprintf.a re out