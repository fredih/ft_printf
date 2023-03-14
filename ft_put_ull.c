/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ull.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:51:40 by aantonio          #+#    #+#             */
/*   Updated: 2023/03/14 19:14:55 by aantonio         ###   ########.fr       */
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

// static size_t	write_number_in_base(unsigned long long number, char *base)
// {
// 	unsigned long long	digit_count;
// 	unsigned long long	index;
// 	unsigned long long	length_new_base;
// 	unsigned long long	copy_number;
// 	unsigned long long	counter;

// 	copy_number = number;
// 	length_new_base = ft_strlen(base);
// 	digit_count = 1;
// 	while (copy_number / length_new_base > 0)
// 	{
// 		copy_number = copy_number / length_new_base;
// 		digit_count++;
// 	}
// 	while (digit_count > 0)
// 	{
// 		index = number / pwr(length_new_base, digit_count - 1);
// 		counter += write(1, base + index, 1);
// 		number = number % pwr(length_new_base, digit_count - 1);
// 		digit_count--;
// 	}
// 	return (counter);
// }

// static size_t	write_number_in_base(unsigned long long number, char *base)
// {
// 	unsigned long long	length_new_base;

// 	length_new_base = ft_srtrlen(base);
// 	if (number < length_new_base)
// 		return (ft_putchar_fd(base[number], 1));
// 	if (number == length_new_base)
// 	{
// 		ft_putchar_fd(base[1], 1);
// 		ft_putchar_fd(base[0], 1);
// 		return (2);
// 	}
// 	while (number < length_new_base != 0)
// 		ft_putchar_fd(base[number /= length_new_base], 1);
// }

// static size_t	write_number_in_base(unsigned long long number, char *base)
// {
// 	static unsigned long long	times = 0;

// 	if (number / ft_strlen(base) < ft_strlen(base))
// 	{
// 		ft_putchar_fd(base[times], 1);
// 		return (times);
// 	}
// 	times++;
// 	write_number_in_base(number, base);
// }

unsigned long long	ft_put_ull(unsigned long long number, char *base)
{
	unsigned long long	i;
	unsigned long long	digit_amount;
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
	digit_amount = i;
	int res = pwr(ft_strlen(base), --i);
	ft_putchar_fd(base[number / res], 1);
	number %= res;
	while (i > 0)
	{
		res = pwr(ft_strlen(base), --i);
		ft_putchar_fd(base[number / res], 1);
		number %= res;
	}
	// ft_putchar_fd(base[number % ft_strlen(base)], 1);
	return (digit_amount);
}
