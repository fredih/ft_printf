/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ull.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:51:40 by aantonio          #+#    #+#             */
/*   Updated: 2023/03/14 21:16:13 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include "libft.h"

static int	pwr(int base, int exponent)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	while (i < exponent)
	{
		result *= base;
		i++;
	}
	return (result);
}

static int	is_valid_base(char *base)
{
	int	base_size;
	int	i;
	int	j;

	if (!base)
		return (0);
	base_size = ft_strlen(base);
	if (base_size == 1 || base_size > 16)
		return (0);
	i = 0;
	while (i < base_size)
	{
		j = i + 1;
		while (j < base_size)
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	put_digits(unsigned long long number, unsigned long long i, char *base)
{
	ft_putchar_fd(base[number / pwr(ft_strlen(base), --i)], 1);
	number %= pwr(ft_strlen(base), i);
	while (i > 0)
	{
		ft_putchar_fd(base[number / pwr(ft_strlen(base), --i)], 1);
		number %= pwr(ft_strlen(base), i);
	}
}

unsigned long long	ft_put_ull(unsigned long long number, char *base)
{
	unsigned long long	i;
	unsigned long long	number_copy;

	number_copy = number;
	if (!base || *base == 0 || !is_valid_base(base))
		return (0);
	if (number < ft_strlen(base))
		return (ft_putchar_fd(base[number], 1));
	i = 1;
	while (1)
	{
		number_copy /= ft_strlen(base);
		i++;
		if (number_copy < ft_strlen(base))
			break ;
	}
	put_digits(number, i, base);
	return (i);
}
