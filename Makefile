NAME	=	libft.a

SRCS	=	ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c\
		ft_isprint.c	ft_strlen.c	ft_memset.c	ft_bzero.c\
		ft_memcpy.c	ft_memmove.c	ft_strlcpy.c	ft_strlcat.c\
		ft_toupper.c	ft_tolower.c	ft_strchr.c	ft_strrchr.c\
		ft_strncmp.c	ft_memchr.c	ft_strnstr.c	ft_memcmp.c\
		ft_atoi.c	ft_strdup.c	ft_calloc.c	ft_substr.c

OBJS	=	$(SRCS:.c=.o)

OBJDIR	:=	./.objs

FLAGS	:=	-Wall -Werror -Wextra

%.o	:	%.c
		gcc $(FLAGS) -c $<	-o $@

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

so:
	gcc -nostartfiles -fPIC $(FLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

clean:
	rm *.o a.out libft.a libft.so
