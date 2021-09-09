/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_integer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:38:01 by demikael          #+#    #+#             */
/*   Updated: 2021/09/08 23:22:22 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./libft/libft.h"
# include "ft_printf.h"

int	ft_put_integer(const char **fmt, int n)
{
	int count;

	(*fmt) = (*fmt) + 2;
	count = ft_count_digit(n);
	ft_putnbr_fd(n, 1);
	return (count);
}
