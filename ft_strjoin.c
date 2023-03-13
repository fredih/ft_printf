/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 10:45:55 by aantonio          #+#    #+#             */
/*   Updated: 2022/12/30 11:06:17 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	s1len;
	size_t	s2len;
	int		i;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	newstr = ft_calloc(s1len + s2len + 1, sizeof(char));
	if (!newstr)
		return (0);
	i = 0;
	while (s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		newstr[s1len + i] = s2[i];
		i++;
	}
	newstr[s1len + i] = '\0';
	return (newstr);
}
