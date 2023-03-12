/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 21:08:07 by aantonio          #+#    #+#             */
/*   Updated: 2023/03/12 20:07:37 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// malloc, free, write,
// va_start, va_arg, va_copy, va_end

#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include "libft.h"

// static int	is_specifier(char c)
// {
// 	if (c == 'd' || c == 'i' || c == 'u' || c == 'x' || c == 'X')
// 		return (1);
// 	if (c == 'c' || c == 's' || c == 'p' )
// 		return (1);
// 	return (0);
// }


// static void	check_types(const char c, unsigned int size_of_specifier)
// {
// 	if (specifier == 'c' && size_of_specifier != sizeof(char))
// 		raise_error();
// 	// if (specifier == 's' && size_of_specifier != sizeof(char))
// 	// 	raise_error();
// 	if (specifier == 'p' && size_of_specifier != sizeof(*void))
// 		raise_error();
// 	if (specifier == 'd' && size_of_specifier != sizeof(int))
// 		raise_error();
// 	if (specifier == 'i' && size_of_specifier != sizeof(int))
// 		raise_error();
// 	if (specifier == 'u' && size_of_specifier != sizeof(int))
// 		raise_error();
// 	if (specifier == 'x' && size_of_specifier != sizeof(int))
// 		raise_error();
// 	if (specifier == 'X' && size_of_specifier != sizeof(int))
// 		raise_error();
// }

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
	size_t				i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] == '%')
		{
			check_specifier_type(str[i + 1], vals);
			i++;
		}
		i++;
	}
}


static void	process_specifier(const char specifier, va_list vals)
{
	char	*str;

	if (specifier == 'c')
		ft_putchar_fd(va_arg(vals, int), 0);
	if (specifier == 's')
		ft_putstr_fd(va_arg(vals, char *), 0);
	if (specifier == 'p')
	{
		str = ft_itoa((unsigned long)va_arg(vals, void *));
		ft_putstr_fd(str, 0);
		free(str);
	}
	if (specifier == 'd' || specifier == 'i' )
	{
		str = ft_itoa(va_arg(vals, int));
		ft_putstr_fd(str, 0);
		free(str);
	}
	if (specifier == 'x' || specifier == 'X' || specifier == 'u')
	{
		str = ft_itoa(va_arg(vals, unsigned int));
		ft_putstr_fd(str, 0);
		free(str);
	}
}

void	ft_printf(const char *str, ...)
{
	va_list	vals;
	size_t	i;

	va_start(vals, str);
	sanitize(str, vals);
	va_end(vals);
	va_start(vals, str);
	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
				ft_putchar_fd('%', 0);
			else
				process_specifier(str[i + 1], vals);
			i++;
		}
		else
			ft_putchar_fd(str[i], 0);
		i++;
	}
	va_end(vals);
}
