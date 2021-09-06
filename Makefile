LIBFT_PATH =./libft
LIBFT =		$(LIBFT_PATH)/libft.a

SOURCES =	ft_printf.c ft_itoa_base.c

OBJECTS =	$(SOURCES:.c=.o)

NAME =		libftprintf.a

CC =		clang
CGLAGS =	-Wextra -Wall -Werror

ARFLAGS =	rcs
AR =		ar
RM =		rm -f

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(LIBFT_PATH)

all:		$(LIBFT) $(NAME)

$(NAME):	 $(OBJECTS)
			cp	$(LIBFT) $(NAME)
			$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)

$(LIBFT):
			$(MAKE) -C $(LIBFT_PATH)

clean:
			$(MAKE) -C $(LIBFT_PATH) clean
			$(RM) $(OBJECTS)

fclean:		clean
			$(MAKE) -C $(LIBFT_PATH) fclean
			$(RM) $(NAME)

re:			fclean all

run:
			clear && gcc ft_printf.c libftprintf.a && ./a.out

.PHONY:		all clean fclean re libft
