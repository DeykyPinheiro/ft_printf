/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:34:58 by demikael          #+#    #+#             */
/*   Updated: 2021/09/09 01:35:05 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./libft/libft.h"
# include "ft_printf.h"
# include <unistd.h>

int	ft_put_pointer(const char** fmt ,unsigned long pointer)
{
	int		count;
	char	* number;


	count = 2;
	(*fmt ) = (*fmt) + 2;
	count += ft_count_hex(pointer);
	write(1, "0x", 2);
	number = ft_itoa_base(pointer, "0123456789abcdef");
	ft_putstr_fd(number, 1);
	ft_free_ptr(&number);
	return (count);
}
