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

char	*ft_strstolcpy(char *dst, const char *src, unsigned int start, size_t len)
{
	size_t i;

	i = 0;
	while (src[start] != '\0' && start <= len)
	{
		dst[i] = src[start];
		i++;
		start++;
	}
	dst[start] = '\0';
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;

	dest = malloc(sizeof(dest) * (ft_strlen(s) + 1));
	*dest = 0;
	if (dest == NULL)
		return (NULL);
	return (ft_strstolcpy(dest, s, start, len));
}
