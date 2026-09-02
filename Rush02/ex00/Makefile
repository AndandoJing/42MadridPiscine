NAME = rush-02

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = main.c read_dict.c parser.c parser_utils.c translate.c translate2.c print.c utils.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re