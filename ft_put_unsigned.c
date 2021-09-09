/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:12:24 by demikael          #+#    #+#             */
/*   Updated: 2021/09/09 01:43:27 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "./libft/libft.h"
# include "ft_printf.h"

int	ft_put_unsigned(const char **fmt, unsigned int number)
{
	int count;
	char *n;

	(*fmt) = (*fmt) + 2;
	n = ft_itoa(number);
	count = ft_strlen(n);
	ft_putstr_fd(n, 1);
	ft_free_ptr(&n);
	return (count);
}
