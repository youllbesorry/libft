/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:05:32 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/17 21:05:32 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char src)
{
	int	i;

	if (dst < src)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(const char *str)
{
	char	*dest;

	dest = malloc(sizeof(dest) * (ft_strlen(str) + 1));
	*dest = 0;
	if (dest == NULL)
		return (NULL);
	return (ft_strcpy(dest, str));
}