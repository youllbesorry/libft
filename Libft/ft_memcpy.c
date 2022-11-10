/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:18:34 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/10 21:03:37 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;

	((char *)dest);
	((char *)src);
	i = 0;
	while (i != n)
	{
		*dest[i] = src[i];
		dest++;
		i++;
	}
	return (dest);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
	char	test[] = "Hello world";
	char	*str = strdup(test);

	printf("%s\n", ft_memcpy(str, 'a', 1));
	printf("%s\n", memcpy(str, 'a', 1));
}
