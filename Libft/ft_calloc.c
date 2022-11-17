/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:05:05 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/17 15:05:05 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	if (count == 0 || size == 0)
		return (NULL);
	if ((count * size) >= 2147483648)
		return (0);
	ptr = malloc(size * count);
	*ptr = 0;
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}