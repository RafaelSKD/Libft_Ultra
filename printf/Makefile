NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -Isrc -Iinclude -Iinclude/printf
RM = rm -rf

SRCS = ft_printf.c \
      ft_putchar.c \
      ft_putnbr.c \
      ft_putstr.c \
      put_hex.c \
      put_pointer.c \
      putnbr_u.c \
      ft_itoa.c \
      ft_utoa.c \
      ft_strlen.c \
      ft_strchr.c \

OBJS =  $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) 
	
fclean: clean
	$(RM) $(NAME)
	
re: fclean all
