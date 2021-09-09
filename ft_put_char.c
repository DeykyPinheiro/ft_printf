/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:36:53 by demikael          #+#    #+#             */
/*   Updated: 2021/09/09 19:34:14 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

int	ft_put_char(const char **chr, char ap)
{
	*chr = (*chr) + 2;
	ft_putchar_fd(ap, 1);
	return (1);
}
