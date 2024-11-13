CC = cc
CFLAGS = -Wall -Wextra -Werror
FILES = ft_isprint.c ft_isascii.c ft_putchar_fd.c ft_strdup.c ft_strmapi.c ft_tolower.c ft_isdigit.c ft_putendl_fd.c ft_striteri.c ft_strncmp.c ft_toupper.c ft_atoi.c ft_itoa.c ft_putnbr_fd.c ft_strjoin.c ft_strnstr.c ft_bzero.c ft_memcpy.c ft_putstr_fd.c ft_strlcat.c ft_strrchr.c ft_isalnum.c ft_memmove.c ft_split.c ft_strlcpy.c ft_strtrim.c ft_isalpha.c ft_memset.c ft_strchr.c ft_strlen.c ft_substr.c ft_memchr.c ft_memcmp.c ft_calloc.c
OBJ = ${FILES:%.c=%.o}
FILESB = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
OBJB = ${FILESB:%.c=%.o}
AR = ar
ARFLAGS = rcs
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $<
bonus: $(OBJB)
	$(AR) $(ARFLAGS) $(NAME) $^
%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@
clean:
	rm -f $(OBJ) $(OBJB)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re

.SECONDARY: $(OBJB)
