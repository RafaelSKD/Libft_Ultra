NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -Isrc -Iinclude -Iinclude/printf
RM = rm -rf

SRCS = Fork.c \
      Getcwd.c \
      Malloc.c \
      Realloc.c \
      Wait.c \
      Freearray.c

OBJS =  $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) 
	
fclean: clean
	$(RM) $(NAME)
	
re: fclean all