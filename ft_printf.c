/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 21:08:07 by aantonio          #+#    #+#             */
/*   Updated: 2023/03/07 17:55:24 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// malloc, free, write,
// va_start, va_arg, va_copy, va_end

#include <stdarg.h>
#include <libft.h>

static int	is_specifier(char c)
{
	if (c == 'd' || c == 'i' || c == 'u' || c == 'x' || c == 'X')
		return (1);
	if (c == 'c' || c == 's' || c == 'p' )
		return (1);
	return (0);
}


static void	check_types(const char c, unsigned int size_of_specifier)
{
	if (specifier == 'c' && size_of_specifier != sizeof(char))
		raise_error();
	// if (specifier == 's' && size_of_specifier != sizeof(char))
	// 	raise_error();
	if (specifier == 'p' && size_of_specifier != sizeof(*void))
		raise_error();
	if (specifier == 'd' && size_of_specifier != sizeof(int)char)
		raise_error();
	if (specifier == 'i' && size_of_specifier != sizeof(int))
		raise_error();
	if (specifier == 'u' && size_of_specifier != sizeof(int))
		raise_error();
	if (specifier == 'x' && size_of_specifier != sizeof(int))
		raise_error();
	if (specifier == 'X' && size_of_specifier != sizeof(int))
		raise_error();
}

static void sanitize(const char *str, va_list vals)
{
	int				i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
			{
				ft_putchar_fd('%', 0)
				i++;
			}
			else if (is_specifier(str[i + 1]))
			{
				check_types(str[i + 1], sizeof(va_arg(vals, WRONG))); //the function will give error on
				//itself if the type doesnt match, so we don't need this function,
				//we just need to get the corresponding dataype extracted from the char of the conversion
				//amnd then put ir inside va_arg
			}
			else
				raise_error();//or check flags when doing the bonus!
		}
		i++;
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	vals;
	int		i;

	va_start(vals, str);
	sanitize(str, vals);
	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] != '%')
			ft_putchar_fd(str[i], 0);
		else
		{
			if (str[i + 1] == '%')
			{
				ft_putchar_fd('%', 0)
				i++;
			}
			else if (is_specifier(str[i + 1]))
			{

			}
			else
				raise_error();//or check flags when doing the bonus!
		}
		i++;
	}
	va_end(ptr);
}
