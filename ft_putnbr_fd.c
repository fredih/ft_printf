/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:24:59 by aantonio          #+#    #+#             */
/*   Updated: 2023/03/13 19:25:05 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	put_digit(unsigned int n, int fd)
{
	static size_t		char_count;

	if (n >= 10)
	{
		put_digit(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
		char_count++;
	}
	if (n < 10)
	{
		ft_putchar_fd(n % 10 + '0', fd);
		char_count++;
		n = char_count;
	}
	return (n);
}

size_t	ft_putnbr_fd(int n, int fd)
{
	unsigned int		uint_n;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		uint_n = -n;
	}
	else
	{
		uint_n = n;
	}
	return (put_digit(uint_n, fd));
}
