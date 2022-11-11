/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:31:19 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/10 22:31:19 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	src[] = "test";
	char		dest[] = "hello world";
	const char	src1[] = "test";
	char		dest1[] = "hello world";

	printf("Before ft_memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 4);
	printf("After ft_memmove dest = %s, src = %s\n", dest, src);
	printf("\n");
	printf("Before memmove dest1 = %s, src1 = %s\n", dest1, src1);
	memmove(dest1, src1, 4);
	printf("After memmove dest1 = %s, src1 = %s\n", dest1, src1);
	return (0);
}
