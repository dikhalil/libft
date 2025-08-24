# Source files
SRCS =	ft_isalpha.c \
      	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memcmp.c \
	ft_memchr.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \

# Bonus source files (linked to linked list functions)
BONUS_SRC = ft_lstadd_back.c \
            ft_lstadd_front.c \
            ft_lstclear.c \
            ft_lstdelone.c \
            ft_lstiter.c \
            ft_lstlast.c \
            ft_lstmap.c \
            ft_lstnew.c \
            ft_lstsize.c

# Object files (regular and bonus)
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRC:.c=.o)

# Compiler and flags
CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a

# Default target: build the library
all: $(NAME)

# Build the main library from regular object files
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compilation rule for object files
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean: remove object files
clean:
	rm -f $(OBJS) $(BONUS_OBJS)

# Full clean: remove object files and the library
fclean: clean
	rm -f $(NAME)

# Bonus: add bonus objects to the library, without recompiling the regular objects
bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

# Rebuild everything: clean and then all
re: fclean all

# Phony targets
.PHONY: all clean fclean re bonus
