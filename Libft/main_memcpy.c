/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:05:52 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/10 22:05:52 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char	src[50] = "test";
	char		dest[50] = "hello world";

	printf("%s\n", memcpy(((void *)0), ((void *)0), 3));
	printf("%s\n", ft_memcpy(((void *)0), ((void *)0), 3));
}
