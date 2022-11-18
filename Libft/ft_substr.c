/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:52:44 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/17 21:52:44 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strslcpy(char *dst, const char *src, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (src[start] != '\0' && i <= len - 1)
	{
		dst[i] = src[start];
		i++;
		start++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
	{
		dest = malloc (sizeof(char));
		if (!dest)
			return (NULL);
		*dest = 0;
		return (dest);
	}
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	return (ft_strslcpy(dest, s, start, len));
}
