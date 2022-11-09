/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:52:46 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/09 10:42:31 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *) b;

	while (i != len)
	{
		*s = c;
		s++;
		i++;
	}
	printf("%s\n", b);
	return (b);
}

int main(void)
{
	char	str[] = "";

	printf("%s\n", ft_memset(str, 'a', 1));
	printf("%s\n", memset(str, 'a', 1));
}