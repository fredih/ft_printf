/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 21:08:07 by aantonio          #+#    #+#             */
/*   Updated: 2023/03/13 22:56:35 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void	check_specifier_type(const char specifier, va_list vals)
{
	if (specifier == 's')
		va_arg(vals, char *);
	else if (specifier == 'p')
		va_arg(vals, void *);
	else if (specifier == 'd' || specifier == 'i' || specifier == 'c')
		va_arg(vals, int);
	else if (specifier == 'x' || specifier == 'X' || specifier == 'u')
		va_arg(vals, unsigned int);
	else if (specifier == '%')
		return ;
	else
		ft_putstr_fd("Error! Not a valid specifier!", 0);
}

static void	sanitize(const char *str, va_list vals)
{
	size_t	i;
	va_list	vals_copy;

	va_copy(vals_copy, vals);
	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] == '%')
		{
			check_specifier_type(str[i + 1], vals_copy);
			i++;
		}
		i++;
	}
	va_end(vals_copy);
}

static size_t	ft_put_ptr(void *nbr, char *base)
{
	if (!nbr)
	{
		return (ft_putstr_fd("(nil)", 1));
	}
	ft_putstr_fd("0x", 1);
	return (2 + ft_put_ull((unsigned long long)nbr, base));
}

static size_t	process_specifier(const char specifier, va_list vals)
{
	if (specifier == 'c')
		return (ft_putchar_fd(va_arg(vals, int), 1));
	if (specifier == 's')
		return (ft_putstr_fd(va_arg(vals, char *), 1));
	if (specifier == 'p')
		return (ft_put_ptr(va_arg(vals, void *), "0123456789abcdef"));
	if (specifier == 'd' || specifier == 'i' )
		return (ft_putnbr_fd(va_arg(vals, int), 1));
	if (specifier == 'x')
		return (ft_put_ull(va_arg(vals, unsigned int), "0123456789abcdef"));
	if (specifier == 'X')
		return (ft_put_ull(va_arg(vals, unsigned int), "0123456789ABCDEF"));
	if (specifier == 'u')
		return (ft_put_ull(va_arg(vals, unsigned int), "0123456789"));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	vals;
	size_t	i;
	size_t	printed_characters;

	va_start(vals, str);
	sanitize(str, vals);
	printed_characters = 0;
	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
				printed_characters += ft_putchar_fd('%', 1);
			else
				printed_characters += process_specifier(str[i + 1], vals);
			i++;
		}
		else
			printed_characters += ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(vals);
	return (printed_characters);
}
