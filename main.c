/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:33:17 by aantonio          #+#    #+#             */
/*   Updated: 2023/03/12 20:16:15 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h" 

int	main(void)
{
	char a[] = "aaa";

	printf("    %p\n%lu\n My printf:\n", a, (unsigned long)&a);

	ft_printf("test only text\n\n");

	ft_printf("Number: %d\n\n", 123);
	ft_printf("Number: %i\n\n", 123);
	ft_printf("Char: %c%c%c%c%c%c%c%c%c\n\n", 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j');
	ft_printf("Strring: %s %s -\n\n", "aadad12323", "123456789");

	ft_printf(" %c ", '0');
	
	ft_printf("\n");
	ft_printf("%c ", '0' + 256);
	
	ft_printf("\n");
	ft_printf(" %c %c %c ", '0', 0, '1');
	
	ft_printf("\n");
	ft_printf(" %c %c %c ", ' ', ' ', ' ');
	
	ft_printf("\n");
	ft_printf(" %c %c %c ", '1', '2', '3');
	
	ft_printf("\n");
	ft_printf(" %c %c %c ", '2', '1', 0);
	
	ft_printf("\n");
	ft_printf(" %c %c %c ", 0, '1', '2');
	
	ft_printf("\n");

	ft_printf(" %s", "");
	ft_printf("\n");
	ft_printf("%s ", "");
	ft_printf("\n");
	ft_printf(" %s ", "");
	ft_printf("\n");
	ft_printf(" %s ", "-");
	ft_printf("\n");
	ft_printf(" %s %s ", "", "-");
	ft_printf("\n");
	ft_printf(" %s %s ", " - ", "");
	ft_printf("\n");
	// ft_printf(" %s %s %s %s %s", " - ", "", "4", "", s2);
	// ft_printf("\n");
	ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
	ft_printf("\n");
	ft_printf(" NULL %s NULL ", NULL);
	
	// a[3] = 97;
	// printf("    %s   sssss\n", a);
	// unsigned long f = 97;
	// printf("    %x   sssss\n", f);
	
	return (0);
}
