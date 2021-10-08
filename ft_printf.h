/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:44:55 by demikael          #+#    #+#             */
/*   Updated: 2021/10/08 13:53:26 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *fmt, ...);
char	*ft_itoa_base(unsigned int number, char *base);
int		ft_put_char(const char **chr, char ap);
int		ft_put_decimal(int decimal);
int		ft_put_hexadecimal(const char **fmt, unsigned long hex);
int		ft_put_integer(const char **fmt, int n);
int		ft_put_pointer(const char **fmt, unsigned long pointer);
int		ft_put_string(const char **fmt, char *ap);
int		ft_put_unsigned(const char **fmt, unsigned int number);
int		ft_count_hex(unsigned long int n);

#endif
