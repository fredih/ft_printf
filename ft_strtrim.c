/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 11:07:49 by aantonio          #+#    #+#             */
/*   Updated: 2023/01/05 16:57:19 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	char			*newstr;

	if (!set[0] || !s1[0])
	{
		return (ft_strdup(s1));
	}
	start = 0;
	while (ft_strchr(set, s1[start]) && s1[start])
	{
		start++;
	}
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[end]) && end > start)
	{
		end--;
	}
	newstr = ft_substr(s1, start, end - start + 1);
	return (newstr);
}
