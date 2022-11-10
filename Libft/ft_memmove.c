/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:25:14 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/10 22:25:14 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
# include <string.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    size_t	i;
    unsigned char	*temp;

    i = 0;
    while (i != ft_strlen(src))
    {
        temp[i] = ((const char *)src)[i];
        i++;
    }

    i = 0;
    while (i != n)
    {
        ((char *)dest)[i] = ((const char *)src)[i];
        i++;
    }
}
