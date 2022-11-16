/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:38:39 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/16 11:44:11 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	n;

	i = 0;
	j = 0;
	n = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (dstsize < i)
		j += dstsize;
	else
		j += i;
	while ((src[n] != '\0' && i < dstsize - 1) && (dstsize != '\0'))
	{
		dst[i] = src[n];
		i++;
		n++;
	}
	dst[i] = '\0';
	return (j);
}
