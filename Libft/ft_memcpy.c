/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:18:34 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/09 10:39:58 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str;
	int		i;

	i = 0;
	while (i != n)
	{
		str = src;
		i++;
	}
	return (dst);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
	char	test[] = "Hello world";
	char	*str = strdup(test);

	printf("%s\n", memset(str, 'a', 2));
}