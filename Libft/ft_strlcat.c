/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:38:39 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/22 01:19:59 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	n;

	i = ft_strlen(src);
	j = ft_strlen(dst);
	n = 0;
	if (dstsize <= i)
		return (i);
	if (dstsize == 0)
		return (i);
	if (dstsize < 0)
		j += dstsize;
	else
		j += i;
	while ((src[n] != '\0' && i < dstsize - 1) && (dstsize != '\0'))
	{
		dst[i + n] = src[n];
		n++;
	}
	dst[i] = '\0';
	return (j);
}
