/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 22:27:07 by demikael          #+#    #+#             */
/*   Updated: 2021/09/09 01:48:47 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static void	ft_reverse(char *number)
{
	size_t	start;
	size_t	end;
	char	aux;

	start = 0;
	end = ft_strlen(number) - 1;
	while (number[start] && start < end)
	{
		aux = number[start];
		number[start] = number[end];
		number[end] = aux;
		end--;
		start++;
	}
}

char	*ft_itoa(long int n)
{
	size_t	isneg;
	size_t	i;
	char	*number;

	isneg = (n < 0);
	if (n == 0)
		return (ft_strdup("0"));
	number = ft_calloc(((ft_count_digit(n) + isneg) + 1), (sizeof(char)));
	if (!number)
		return (0);
	i = 0;
	while (n)
	{
		number[i++] = '0' + ft_abs(n % 10);
		n /= 10;
	}
	if (isneg)
		number[i] = '-';
	ft_reverse(number);
	return (number);
}
