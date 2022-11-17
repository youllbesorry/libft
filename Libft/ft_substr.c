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

char	*ft_strstolcpy(char *dst, const char src, unsigned int start, size_t len)
{
	if (dst < src)
		return (NULL);
	i = 0;
	while (src[start++ <= len] != '\0')
		dst[i] = src[i];
	dst[i] = '\0'
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
