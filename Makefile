NAME = libft.a
SRCS = $(wildcard *.c)
OBJS = $(SRCS:%.c=%.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
fclean:
	rm -f $(NAME)
	
re: clean fclean
