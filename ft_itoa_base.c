/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:35:01 by demikael          #+#    #+#             */
/*   Updated: 2021/09/09 02:35:10 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

static void ft_reverse(char *str)
{
	size_t	end;
	size_t	start;
	char	aux;

	end = ft_strlen(str) - 1;
	start = 0;
	while (str[start] && start < end)
	{
		aux = str[start];
		str[start] = str[end];
		str[end] = aux;
		start++;
		end--;
	}
}


char	*ft_itoa_base(unsigned long int number, char *base)
{
	char	*str;
	int		size_base;
	int		size_number;
	int		i;

	if (number == 0)
		return (ft_strdup("0"));
	size_base = ft_strlen(base);
	size_number = ft_count_hex(number);

	str = ft_calloc(size_number + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (number != 0)
	{
		str[i++] = base[number % size_base];
		number = (number / size_base);
	}
	ft_reverse(str);
	return (str);
}
