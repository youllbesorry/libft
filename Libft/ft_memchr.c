/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:18:30 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/14 16:33:18 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s1;

	c = (char) c;
	s1 = (char *) s;
	while (*s1 != '\0' && n != 0)
	{
		if (*s1 == c)
			return (s1);
		s1++;
		n--;
	}
	return (NULL);
}
