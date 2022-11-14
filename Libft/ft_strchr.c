/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:42:55 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/14 11:46:35 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s1;

	c = (char) c;
	s1 = (char *) s;
	while (*s1 != '\n')
	{
		if (*s1 == c)
			return (s1);
		s1++;
	}
	return (NULL);
}
