/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:33:17 by aantonio          #+#    #+#             */
/*   Updated: 2023/03/07 17:51:25 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h" 

int	main(void)
{
	char a[] = "aaa";
	
	printf("    %s   sssss\n", a);
	
	a[3] = 97;
	printf("    %s   sssss\n", a);
	unsigned long f = 97;
	printf("    %x   sssss\n", f);
	
	return (0);
}
