NAME =	libftprintf.a

SRCS =	ft_printf.c \
		./includes/utils.c

OBJS =	$(SRCS:.c=.o)

CC =	gcc includes -Wall -Wextra -Werror

%.o:	%c ft_prinf.h Makefile
		$(CC) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME) =	$(OBJS) ft_printf.h
			ar rcs $(NAME) $(OBJS)

clean: rm -f $(OBJS)
