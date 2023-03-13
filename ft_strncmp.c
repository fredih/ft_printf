/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 10:59:30 by aantonio          #+#    #+#             */
/*   Updated: 2022/08/13 10:59:30 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	int		result;
	size_t	size1;
	size_t	size2;
	size_t	i;

	if (!n)
		return (0);
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	i = 0;
	result = 0;
	while (i <= size1 && i < n)
	{
		result = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (result != 0 || i > size2)
			break ;
		i++;
	}
	return (result);
}
