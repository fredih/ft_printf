/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:33:17 by aantonio          #+#    #+#             */
/*   Updated: 2023/03/13 15:53:41 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h" 

int	main(void)
{
	// ft_printf("1234");
	// ft_printf("Number: %d", 123);
	// ft_printf("Number: %i", 123);
	// ft_printf("Char: %c%c%c%c%c%c%c%c%c", 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j');
	// ft_printf("Strring: %s %s -", "aadad12323", "123456789");
	// ft_printf(" %c ", '0');
	// ft_printf("%c ", '0' + 256);
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

	ft_printf("\n%i characters:\n", ft_printf("%s%s%s%s%s%s", "", "", "", "", "", ""));
	ft_printf("\n%i characters:\n", ft_printf("1234"));
	ft_printf("\n%i characters:\n", ft_printf("Number: %d", 123));
	ft_printf("\n%i characters:\n", ft_printf("Number: %i", 123));
	ft_printf("\n%i characters:\n", ft_printf("Char: %c%c%c%c%c%c%c%c%c", 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'));
	ft_printf("\n%i characters:\n", ft_printf("Strring: %s %s -", "1234567890", "1234567890"));
	ft_printf("\n%i characters:\n", ft_printf(" %c ", '0'));
	ft_printf("\n%i characters:\n", ft_printf("%c ", '0' + 256));
	ft_printf("\n%i characters:\n", ft_printf(" %c %c %c ", '0', 0, '1'));
	ft_printf("\n%i characters:\n", ft_printf(" %c %c %c ", ' ', ' ', ' '));
	ft_printf("\n%i characters:\n", ft_printf(" %c %c %c ", '1', '2', '3'));
	ft_printf("\n%i characters:\n", ft_printf(" %c %c %c ", '2', '1', 0));
	ft_printf("\n%i characters:\n", ft_printf(" %c %c %c ", 0, '1', '2'));
	ft_printf("\n%i characters:\n", ft_printf(" %s", ""));
	ft_printf("\n%i characters:\n", ft_printf("%s ", ""));
	ft_printf("\n%i characters:\n", ft_printf(" %s ", ""));
	ft_printf("\n%i characters:\n", ft_printf(" %s ", "-"));
	ft_printf("\n%i characters:\n", ft_printf(" %s %s ", "", "-"));
	ft_printf("\n%i characters:\n", ft_printf(" %s %s ", " - ", ""));
	// ft_printf("\n%i characters:", ft_printf(" %s %s %s %s %s", " - ", "", "4", "", s2));
	// ft_printf("\n%i characters:", ft_printf("\n"));
	ft_printf("\n%i characters:\n", ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 "));
	ft_printf("\n%i characters:\n", ft_printf(" NULL %s NULL ", NULL));

	return (0);
}
