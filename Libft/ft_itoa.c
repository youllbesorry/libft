/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:48:34 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/25 19:12:18 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(long nb)
{
	size_t	len;

	len = 0;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		len++;
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

static char	*ft_set(char *str, size_t len)
{
	size_t	i;

	i = 0;
	while (i != len)
	{
		str[i] = '0';
		i++;
	}
	return (str);
}

static char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	size_t	i;
	long	nb;

	nb = n;
	len = ft_intlen(nb);
	i = len;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str = ft_set(str, len);
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	while (nb > 0)
	{
		str[len - 1] = nb % 10 + '0';
		nb /= 10;
		len--;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	char	*str;

	str = ft_itoa(-2147483648);
	printf ("str = %s\n", str);
	free(str);
}
