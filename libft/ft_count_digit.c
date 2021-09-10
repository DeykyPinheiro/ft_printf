/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:45:10 by demikael          #+#    #+#             */
/*   Updated: 2021/09/09 00:24:16 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_digit(long int n)
{
	int	i;
	int	is_neg;

	is_neg = (n < 0);
	i = 0;
	if (n == 0)
		i++;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i + is_neg);
}
