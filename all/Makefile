NAME = libft.a
CC_FLAGS = -Wall -Werror -Wextra
OBJECT_FILES= \
	ft_strlen.o ft_isalpha.o ft_isdigit.o ft_isalnum.o   \
	ft_isascii.o ft_isprint.o ft_memset.o ft_bzero.o     \
	ft_memcpy.o ft_memmove.o ft_strlcpy.o ft_strlcat.o   \
	ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o   \
	ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o    \
	ft_atoi.o ft_calloc.o ft_strdup.o ft_substr.o        \
	ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o       \
	ft_strmapi.o ft_striteri.o ft_putchar_fd.o 			 \
	ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o

OBJECT_BONUS = \
	$(OBJECT_FILES) ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o ft_lstadd_back.o\
	ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o

CC = gcc

all: $(NAME) 

$(NAME): $(OBJECT_FILES)
	ar rc $(NAME) $^
	ranlib $(NAME)

bonus: $(OBJECT_BONUS)
	ar rc $(NAME) $^
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CC_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJECT_FILES)

fclean: clean 
	rm -f $(NAME)

re: fclean all

# all: ft_strlen.o
# 	ar rc libft.a ft_strlen.o
# 	ranlib libft.a

# ft_strlen.o: ft_strlen.c 
# 	gcc -c ft_strlen.c 

# clean:
# 	rm *.o
