/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 21:11:31 by demikael          #+#    #+#             */
/*   Updated: 2021/09/09 21:11:33 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

int	ft_count_hex(unsigned long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n)
	{
		i++;
		n /= 16;
	}
	return (i);
}
