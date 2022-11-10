/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:52:46 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/10 21:58:43 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	
	i = 0;
	while (i != len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
