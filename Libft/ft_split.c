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
		if (s[i] == '\0' && s[i - 1] != c)
			n++;
	}
	return (n + 1);
}

static	size_t	ft_len_word(char const	*s, char c, size_t j, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		while (s[j] != c && s[j] != '\0')
			j++;
		return (j);
	}
	if (n == 1)
	{
		while (s[j] == c)
			j++;
		return (j);
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
	size_t	j;
	size_t	k;

	nbword = ft_cont_word(s, c);
	strs = malloc((sizeof(char *)) * nbword);
	if (!strs)
		return (NULL);
	j = 0;
	i = 0;
	k = 0;
	while (nbword > i)
	{
		k = ft_len_word(s, c, j, 1);
		j = ft_len_word(s, c, k, 0) - k;
		strs[i] = ft_substr(s, k, j);
		if (strs[i] == NULL)
			return (ft_free(strs));
		i++;
		j += k;
	}
	strs[i - 1] = NULL;
	return (strs);
}
