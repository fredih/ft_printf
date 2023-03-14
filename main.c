/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:33:17 by aantonio          #+#    #+#             */
/*   Updated: 2023/03/14 16:04:02 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h" 

int	main(void)
{
	// ft_printf("%x %y", 0123456789, 234);


	
	// ft_printf("1234");
	// ft_printf(" %c %c %c ", '0', 0, '1');
	// ft_printf(" %c %c %c ", ' ', ' ', ' ');
	// ft_printf(" %c %c %c ", '1', '2', '3');
	// ft_printf(" %c %c %c ", '2', '1', 0);
	// ft_printf(" %c %c %c ", 0, '1', '2');
	// ft_printf(" %s", "");
	// ft_printf("%s ", "");
	// ft_printf(" %s ", "");
	// ft_printf(" %s ", "-");
	// ft_printf(" %s %s ", "", "-");
	// ft_printf(" %s %s ", " - ", "");
	// ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
	// ft_printf(" NULL %s NULL ", NULL);
	// ft_printf(" %p ", -1);


	ft_put_ull(0, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(1, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(2, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(3, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(4, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(5, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(6, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(7, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(8, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(9, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(10, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(11, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(12, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(13, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(14, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(15, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(16, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(17, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(18, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(19, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(20, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(30, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(31, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(32, "0123456789abcdef");
	ft_printf("\n");
	ft_put_ull(33, "0123456789abcdef");
	ft_printf("\n");
	// ft_printf("\n");
	// ft_printf("\n");
	// ft_printf(" %p ", -1);
	// ft_printf("\n");
	// ft_printf(" %p ", 0);
	// ft_printf("\n");
	// ft_printf(" %p ", 1);
	// ft_printf("\n");
	// ft_printf(" %p ", 15);
	// ft_printf("\n");
	// ft_printf(" %p ", 16);
	// ft_printf("\n");
	// ft_printf(" %p ", 17);
	// ft_printf("\n");
	// ft_printf(" %p %p ", LONG_MIN, LONG_MAX);
	// ft_printf("\n");
	// ft_printf(" %p %p ", INT_MIN, INT_MAX);
	// ft_printf("\n");
	// ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	// ft_printf("\n");

	// ft_printf("\n%i characters:\n", ft_printf("%%"));
	// ft_printf("\n%i characters:\n", ft_printf("%s%s%s%s%s%s", "", "", "", "", "", ""));
	// ft_printf("\n%i characters:\n", ft_printf("1234"));
	// ft_printf("\n%i characters:\n", ft_printf("Number: %d", 123));
	// ft_printf("\n%i characters:\n", ft_printf("Number: %i", 123));
	// ft_printf("\n%i characters:\n", ft_printf("Char: %c%c%c%c%c%c%c%c%c", 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'));
	// ft_printf("\n%i characters:\n", ft_printf("Strring: %s %s -", "1234567890", "1234567890"));
	// ft_printf("\n%i characters:\n", ft_printf(" %c ", '0'));
	// ft_printf("\n%i characters:\n", ft_printf("%c ", '0' + 256));
	// ft_printf("\n%i characters:\n", ft_printf(" %c %c %c ", '0', 0, '1'));
	// ft_printf("\n%i characters:\n", ft_printf(" %c %c %c ", ' ', ' ', ' '));
	// ft_printf("\n%i characters:\n", ft_printf(" %c %c %c ", '1', '2', '3'));
	// ft_printf("\n%i characters:\n", ft_printf(" %c %c %c ", '2', '1', 0));
	// ft_printf("\n%i characters:\n", ft_printf(" %c %c %c ", 0, '1', '2'));
	// ft_printf("\n%i characters:\n", ft_printf(" %s", ""));
	// ft_printf("\n%i characters:\n", ft_printf("%s ", ""));
	// ft_printf("\n%i characters:\n", ft_printf(" %s ", ""));
	// ft_printf("\n%i characters:\n", ft_printf(" %s ", "-"));
	// ft_printf("\n%i characters:\n", ft_printf(" %s %s ", "", "-"));
	// ft_printf("\n%i characters:\n", ft_printf(" %s %s ", " - ", ""));
	// // ft_printf("\n%i characters:", ft_printf(" %s %s %s %s %s", " - ", "", "4", "", s2));
	// // ft_printf("\n%i characters:", ft_printf("\n"));
	// ft_printf("\n%i characters:\n", ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 "));
	// ft_printf("\n%i characters:\n", ft_printf(" NULL %s NULL ", NULL));

	return (0);
}
