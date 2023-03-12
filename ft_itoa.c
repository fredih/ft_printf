/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:37:02 by aantonio          #+#    #+#             */
/*   Updated: 2023/01/05 13:44:35 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	absval(int n)
{
	unsigned int	unsigned_n;

	if (n >= 0)
	{
		unsigned_n = (unsigned int)n;
	}
	else
	{
		unsigned_n = (unsigned int)(-(n + 1)) + 1;
	}
	return (unsigned_n);
}

static int	get_int_size(int number)
{
	unsigned int	size;
	unsigned int	unsigned_n;

	size = 0;
	if (number == 0)
	{
		return (1);
	}
	unsigned_n = absval(number);
	while (unsigned_n > 0)
	{
		unsigned_n = unsigned_n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int					i;
	int					size;
	unsigned int		remainder;
	char				*result;

	size = get_int_size(n);
	result = ft_calloc(size + 1 + (n < 0), sizeof(char));
	if (!result)
		return (0);
	if (n < 0)
	{
		result[0] = '-';
	}
	i = 0;
	while (i < size)
	{
		remainder = absval(n) % 10;
		result[size - 1 - i + (n < 0)] = remainder + '0';
		n = n / 10;
		i++;
	}
	return (result);
}
