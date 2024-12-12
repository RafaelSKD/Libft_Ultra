# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rafaefer <rafaefer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/07 15:45:07 by rafaefer          #+#    #+#              #
#    Updated: 2024/12/12 15:10:23 by rafaefer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Isrc -Iinclude -Iprintf
RM = rm -rf
NAME = libft.a

VPATH = src:src/conversion:src/lists:src/mem:src/output:src/str:src/is:printf:get_next_line

SRCS = src/conversion/ft_atoi.c src/conversion/ft_itoa.c src/conversion/ft_tolower.c \
       src/conversion/ft_toupper.c src/conversion/ft_atol.c \
       src/lists/ft_lstadd_back.c src/lists/ft_lstadd_front.c src/lists/ft_lstclear.c \
       src/lists/ft_lstdelone.c src/lists/ft_lstiter.c src/lists/ft_lstlast.c \
       src/lists/ft_lstmap.c src/lists/ft_lstnew.c src/lists/ft_lstsize.c \
       src/mem/ft_bzero.c src/mem/ft_calloc.c src/mem/ft_memchr.c src/mem/ft_memcmp.c \
       src/mem/ft_memcpy.c src/mem/ft_memmove.c src/mem/ft_memset.c \
       src/output/ft_putchar_fd.c src/output/ft_putendl_fd.c src/output/ft_putnbr_fd.c \
       src/output/ft_putstr_fd.c \
       src/is/ft_isalnum.c src/is/ft_isalpha.c src/is/ft_isascii.c src/is/ft_isdigit.c \
       src/is/ft_isprint.c \
       src/str/ft_split.c src/str/ft_strchr.c src/str/ft_strdup.c src/str/ft_striteri.c \
       src/str/ft_strjoin.c src/str/ft_strlcat.c src/str/ft_strlcpy.c \
       src/str/ft_strlen.c src/str/ft_strmapi.c src/str/ft_strncmp.c \
       src/str/ft_strnstr.c src/str/ft_strrchr.c src/str/ft_strtrim.c \
	   src/str/ft_substr.c src/str/ft_count_words.c src/str/ft_strcmp.c \
       printf/ft_printf.c printf/put_pointer.c printf/put_hex.c printf/ft_putstr.c \
       printf/ft_utoa.c printf/putnbr_u.c printf/ft_putchar.c printf/ft_putnbr.c \
       get_next_line/get_next_line.c get_next_line/get_next_line_utils.c \
       remakes/Fork.c remakes/Getcwd.c remakes/Malloc.c remakes/Realloc.c remakes/Wait.c

OBJS = $(addprefix build/,$(SRCS:.c=.o))

$(NAME): $(OBJS)
	@echo "Creating library $(NAME)..."
	@ar rcs $(NAME) $(OBJS)

all: $(NAME)

build:
	@mkdir -p build

build/%.o: %.c | build
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning object files..."
	@$(RM) build

fclean: clean
	@echo "Removing $(NAME)..."
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

