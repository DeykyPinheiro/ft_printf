/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:22:15 by demikael          #+#    #+#             */
/*   Updated: 2021/09/09 19:35:17 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"
#include <unistd.h>

int	ft_put_string(const char **fmt, char *ap)
{
	int	count;

	if (!ap)
	{
		write(1, "(null)", 6);
		(*fmt) = (*fmt) + 2;
		return (6);
	}
	(*fmt) = (*fmt) + 2;
	count = ft_strlen(ap);
	ft_putstr_fd(ap, 1);
	return (count);
}
