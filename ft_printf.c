/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 21:08:07 by aantonio          #+#    #+#             */
/*   Updated: 2023/03/11 13:39:02 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// malloc, free, write,
// va_start, va_arg, va_copy, va_end

#include <stdarg.h>
#include <libft.h>

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

static void	check_specifier_type(const char c, va_list vals)
{
	if (specifier == 'c')
		va_arg(vals, char);
	if (specifier == 's')
		va_arg(vals, *char);
	if (specifier == 'p')
		va_arg(vals, *void);
	if (specifier == 'd' || specifier == 'i' || specifier == 'u')
		va_arg(vals, int);
	if (specifier == 'x' || specifier == 'X')
		va_arg(vals, int);
	else
		ft_putstr_fd("Error! Not a valid specifier!", 0);
}

static void	sanitize(const char *str, va_list vals)
{
	int				i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
				i++;
			else
				check_specifier_type(str[i + 1], vals);
		}
		i++;
	}
}


static void	process_specifier(const char specifier, va_list vals)
{
	if (specifier == 'c')
		ft_putchar_fd(va_arg(vals, char), 0);
	if (specifier == 's')
		ft_putstr_fd(va_arg(vals, *char), 0);
	if (specifier == 'p')
		ft_putstr_fd(ft_itoa(va_arg(vals, unsigned long)), 0);
	if (specifier == 'd' || specifier == 'i' )
		ft_putstr_fd(ft_itoa(va_arg(vals, int)), 0);
	if (specifier == 'x' || specifier == 'X'|| specifier == 'u')
		ft_putstr_fd(ft_itoa(va_arg(vals, unsigned int)), 0);
}

int	ft_printf(const char *str, ...)
{
	va_list	vals;
	int		i;

	va_start(vals, str);
	sanitize(str, vals);
	va_end(ptr);
	va_start(vals, str);
	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
			{
				ft_putchar_fd('%', 0);
				i++;
			}
			else
				process_specifier(str[i + 1], vals);
		}
		i++;
	}
	va_end(ptr);
}
