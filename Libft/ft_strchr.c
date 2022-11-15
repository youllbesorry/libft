/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:42:55 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/15 18:32:33 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s1;
	size_t	len;

	c = (char) c;
	s1 = (char *) s;
	len = ft_strlen(s1);
	while (len + 1)
	{
		if (*s1 == c)
			return (s1);
		s1++;
		len--;
	}
	return (NULL);
}
