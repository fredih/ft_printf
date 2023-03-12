/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:10:35 by aantonio          #+#    #+#             */
/*   Updated: 2022/12/30 10:12:04 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char				*charptr;
	unsigned int		i;

	charptr = (char *)s;
	i = 0;
	while (i < n)
	{
		*(charptr + i) = (unsigned char)c;
		i++;
	}
	return (charptr);
}
