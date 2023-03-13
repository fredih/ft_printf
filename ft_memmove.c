/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:56:34 by aantonio          #+#    #+#             */
/*   Updated: 2022/12/29 15:07:54 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;

	if (n > 0 && !src && !dest)
		return (dest);
	if ((unsigned long)dest < (unsigned long)src)
	{
		i = 0;
		while (i < n)
		{
			*((char *)dest + i) = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i >= 1)
		{
			((char *)dest)[i - 1] = ((char *)src)[i - 1];
			i--;
		}
	}
	return (dest);
}
