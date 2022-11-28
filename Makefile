NAME =	libftprintf.a

SRCS =	ft_printf.c \
		./includes/ft_print_utils.c \
		./includes/ft_putnbr_base.c

OBJS =	$(SRCS:.c=.o)

CC = gcc -Wall -Wextra -Werror includes

%.o: %.c ft_prinf.h Makefile
		$(CC) -I. -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) ft_printf.h
		ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all
