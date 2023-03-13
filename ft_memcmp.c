/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:43:28 by aantonio          #+#    #+#             */
/*   Updated: 2022/12/29 15:43:28 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		result;
	size_t	i;

	if (!n)
		return (0);
	i = 0;
	result = 0;
	while ((unsigned int)i < n)
	{
		result = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
		if (result != 0)
			break ;
		i++;
	}
	return (result);
}
