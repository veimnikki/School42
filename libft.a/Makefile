CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = libft.a
LIB_FILES = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memchr.c ft_memcpy.c ft_memset.c ft_strlcat.c ft_strlen.c ft_strnstr.c ft_tolower.c \
			ft_atoi.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memmove.c ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_strrchr.c ft_toupper.c \
			ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c
LIB_OBJS = $(LIB_FILES:%.c=%.o)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
all: $(NAME)
$(NAME): $(LIB_OBJS)
		ar rc $(NAME) $(LIB_OBJS)
clean:
		$(RM) $(LIB_OBJS) $(BONUS_OBJS)
fclean: clean
		$(RM) $(NAME)
re: fclean all
