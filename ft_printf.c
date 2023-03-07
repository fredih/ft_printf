/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 21:08:07 by aantonio          #+#    #+#             */
/*   Updated: 2023/03/07 16:52:19 by aantonio         ###   ########.fr       */
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

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		i;

	va_start(ptr, str);
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
