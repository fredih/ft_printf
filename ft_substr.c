/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 10:10:14 by aantonio          #+#    #+#             */
/*   Updated: 2023/01/05 16:13:30 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*newstr;
	size_t		slen;

	if (start >= ft_strlen(s))
	{
		newstr = ft_calloc(1, sizeof(char));
		newstr[0] = '\0';
		return (newstr);
	}
	slen = ft_strlen((char *)s + start);
	if (slen < len)
		len = slen;
	newstr = ft_calloc(len + 1, sizeof(char));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, (char *)s + start, len + 1);
	return (newstr);
}
