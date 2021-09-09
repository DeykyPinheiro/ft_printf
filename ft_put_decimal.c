/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_decimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:37:25 by demikael          #+#    #+#             */
/*   Updated: 2021/09/09 19:39:19 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

int	ft_put_decimal(int decimal)
{
	int	count;

	count = ft_count_digit(decimal);
	ft_putnbr_fd(decimal, 1);
	return (count);
}
