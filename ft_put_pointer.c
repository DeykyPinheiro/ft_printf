/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:34:58 by demikael          #+#    #+#             */
/*   Updated: 2021/09/09 16:44:07 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./libft/libft.h"
# include "ft_printf.h"
# include <unistd.h>

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


static char	*ft_itoa_base_l(unsigned long int number, char *base)
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

int	ft_put_pointer(const char** fmt ,unsigned long pointer)
{
	int		count;
	char	* number;


	count = 2;
	(*fmt ) = (*fmt) + 2;
	count += ft_count_hex(pointer);
	write(1, "0x", 2);
	number = ft_itoa_base_l(pointer, "0123456789abcdef");
	ft_putstr_fd(number, 1);
	ft_free_ptr(&number);
	return (count);
}
