/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexadecimal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:52:44 by demikael          #+#    #+#             */
/*   Updated: 2021/09/09 02:32:57 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./libft/libft.h"
# include "ft_printf.h"

int	ft_put_hexadecimal(const char **fmt, unsigned long hex)
{
	int count;
	char *number;

	if (*(*fmt + 1) == 'X')
		number = ft_itoa_base(hex, "0123456789ABCDEF");
	else if (*(*fmt + 1) == 'x')
		number = ft_itoa_base(hex, "0123456789abcdef");
	count = ft_strlen(number);
	if (*number)
		ft_putstr_fd(number, 1);
	ft_free_ptr(&number);
	(*fmt) = (*fmt) + 2;
	return (count);
}
