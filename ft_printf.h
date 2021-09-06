# ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <limits.h>

int		ft_printf(const char *, ...);

char	*ft_itoa_base(unsigned long int number, char *base);

# endif
