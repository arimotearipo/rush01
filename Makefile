SRCS = ft_putstr.c checkinput.c main.c ft_atoi.c tower.c parseinputs.c

OBJS = $(SRCS.c=.o)

FLAGS = -Wall -Wextra -Werror

CC = gcc

NAME = rush01

all:	$(NAME)

$(NAME):	$(SRCS)
			$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:	$(OBJS)
		rm -rf $(OBJS)

fclean:	clean
		rm -rf $(NAME)

re:		fclean all