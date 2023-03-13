/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:13:44 by aantonio          #+#    #+#             */
/*   Updated: 2023/01/07 23:04:07 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_chars(char const*s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

static char	**get_result(char *trimmed, char c)
{
	char	**result;
	int		wordcount;
	char	*end;
	char	*words;
	int		i;

	wordcount = count_chars(trimmed, c) + 1;
	result = ft_calloc(wordcount + 1, sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	words = trimmed;
	while (i < wordcount)
	{
		end = ft_strchr(words, c);
		if (!end)
			break ;
		result[i++] = ft_substr(words, 0, end - words);
		while (*end == c)
			end++;
		words = end;
	}
	result[i] = ft_substr(words, 0, ft_strlen(words));
	return (result);
}

static char	*trimchar(char const *s1, char c)
{
	unsigned int	start;
	unsigned int	end;
	char			*newstr;

	if (!s1[0])
	{
		return (ft_strdup(s1));
	}
	start = 0;
	while (c == s1[start] && s1[start])
	{
		start++;
	}
	end = ft_strlen(s1) - 1;
	while (c == s1[end] && end > start)
	{
		end--;
	}
	newstr = ft_substr(s1, start, end - start + 1);
	return (newstr);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*trimmed;

	if (!s)
		return (0);
	trimmed = trimchar(s, c);
	if (!trimmed[0])
	{
		result = ft_calloc(1, sizeof(char *));
		free(trimmed);
		return (result);
	}
	if (!ft_strchr(trimmed, c) || *ft_strchr(trimmed, c) == '\0')
	{
		result = ft_calloc(2, sizeof(char *));
		if (!result)
			return (NULL);
		result[0] = ft_strdup(trimmed);
		free(trimmed);
		return (result);
	}
	result = get_result(trimmed, c);
	free(trimmed);
	return (result);
}
