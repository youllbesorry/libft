/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:26:09 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/21 18:26:09 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_cont_word(char const *s, char c)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		i++;
		if (s[i] == c && s[i - 1] != c)
			n++;
		if (s[i] == '\0' && s[i - 1] != c && c != '\0')
			n++;
	}
	return (n + 1);
}

static	size_t	ft_len_word(char const	*s, char c, size_t i, size_t n)
{
	if (n == 0)
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		return (i);
	}
	if (n == 1)
	{
		while (s[i] == c && c != '\0')
			i++;
		return (i);
	}
	return (0);
}

static	char	**ft_free(char **strs)
{
	size_t	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	nbword;
	size_t	len;
	size_t	start;

	nbword = ft_cont_word(s, c);
	strs = malloc((sizeof(char *)) * nbword);
	if (!strs)
		return (NULL);
	len = 0;
	i = 0;
	start = 0;
	while (nbword > i + 1)
	{
		start = ft_len_word(s, c, len, 1);
		len = ft_len_word(s, c, start, 0) - start;
		strs[i] = ft_substr(s, start, len);
		if (strs[i] == NULL)
			return (ft_free(strs));
		i++;
		len += start;
	}
	strs[i] = NULL;
	return (strs);
}
