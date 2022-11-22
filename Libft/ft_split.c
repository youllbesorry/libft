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

size_t	tab_len(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j++;
		i++;
	}
	return (i - j);
}



void	ft_free(char **strs, size_t i)
{
	size_t	j;

	j = 0;
	while (j <= i)
	{
		free(strs[j]);
		j++;
	}
	free(strs);
	return ;
}

size_t	ft_pass_sep(char const *s, char c, int n, size_t i)
{
	size_t	j;

	j = 0;
	if (n == 0)
	{
		while (s[i] == c)
			i++;
	}
	return (i);
}

char	**ft_alloc_2d_tab(char const *s, char c, char **strs, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;

	i = ft_pass_sep(s, c, 0, 0);
	j = 0;
	n = 0;
	strs = malloc(sizeof(*strs) * (len + 1));
	if (!strs)
		return (NULL);
	while (i != ft_strlen(s) + 1)
	{
		if (s[i] != c && s[i] != '\0')
			j++;
		else if (s[i] == c || s[i] == '\0')
		{
			strs[n] = malloc(sizeof(char) * (j + 1));
			if (!strs)
			{
				ft_free(strs, i);
				return (NULL);
			}
			j = 0;
			n++;
			i = ft_pass_sep(s, c, 0, i);
		}
		i++;
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	j;
	size_t	n;
	char	**strs;

	len = tab_len(s, c) + 1;
	strs = NULL;
	strs = ft_alloc_2d_tab(s, c, strs, len);
	if (strs == NULL)
		return (NULL);
	i = ft_pass_sep(s, c, 0, 0);
	n = 0;
	j = 0;
	while (s[i] != '\0' && j != len)
	{
		if (s[i] != c)
			strs[j][n++] = s[i];
		else
		{
			strs[j][n] = '\0';
			n = 0;
			j++;
			i = ft_pass_sep(s, c, 0, i) - 1;
		}
		i++;
	}
	*strs[j] = '\0';
	strs[j + 1] = NULL;
	return (strs);
}
