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
#include <stdio.h>

static size_t	tab_len(char const *s, char c, int n, size_t i)
{
	size_t	j;

	j = 0;
	if (n == 0)
	{
		while (s[i] != '\0')
		{
			if (s[i] == c)
				j++;
			i++;
		}
		return (i - j);
	}
	if (n == 1)
	{
		while (s[i] == c)
			i++;
		return (i);
	}
	return (0);
}

static void	*ft_free(char **strs, size_t i)
{
	size_t	j;

	j = 0;
	while (j <= i)
	{
		free(strs[j]);
		j++;
	}
	free(strs);
	return (NULL);
}

static char	**ft_append(char const *s, char c, char **strs, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;

	i = tab_len(s, c, 1, 0);
	n = 0;
	j = 0;
	while (s[i] != '\0' && j <= len)
	{
		if (s[i] != c)
			strs[j][n++] = s[i];
		else
		{
			strs[j][n] = '\0';
			j++;
			n = 0;
			i = tab_len(s, c, 1, i) - 1;
		}
		i++;
	}
	if (j <= 1)
			j++;
	strs[j] = NULL;
	return (strs);
}

static char	**ft_alloc_2d_tab(char const *s, char c, char **strs, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;

	i = tab_len(s, c, 1, 0);
	j = 0;
	n = 0;
	strs = malloc(sizeof(char *) * (len + 1));
	if (!strs)
		return (NULL);
	while (i != ft_strlen(s) + 1)
	{
		if (s[i] != c && s[i] != '\0')
			j++;
		else if (s[i] == c || s[i] == '\0')
		{
			strs[n++] = malloc(sizeof(char) * (j + 1));
			if (!strs[n - 1])
				return (ft_free(strs, i));
			j = 0;
			i = tab_len(s, c, 1, i);
		}
		i++;
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	char	**strs;

	strs = NULL;
	len = tab_len(s, c, 0, 0) + 1;
	strs = ft_alloc_2d_tab(s, c, strs, len);
	if (!strs)
		return (NULL);
	if (c == '\0')
		return (strs);
	strs = ft_append(s, c, strs, len);
	return (strs);
}
