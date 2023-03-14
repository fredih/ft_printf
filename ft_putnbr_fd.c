/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:24:59 by aantonio          #+#    #+#             */
/*   Updated: 2023/03/14 21:08:34 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	put_digit(unsigned int n, int fd)
{
	if (n >= 10)
	{
		put_digit(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	if (n < 10)
	{
		ft_putchar_fd(n % 10 + '0', fd);
	}
	return (n);
}

size_t	ft_putnbr_fd(int n, int fd)
{
	unsigned int	uint_n;
	int				i;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		uint_n = -n;
	}
	else
	{
		uint_n = n;
	}
	put_digit(uint_n, fd);
	i = 0;
	while (uint_n > 0)
	{
		uint_n /= 10;
		i++;
	}
	return ((n < 0) + i + (n == 0));
}
