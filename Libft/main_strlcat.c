/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:08:40 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/11 16:24:32 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char		dst[50] = "hello world";
	const char	src[50] = "test";
	char		dst1[50] = "hello world";
	const char	src1[50] = "test";

	printf("dst = %s src = %s\n", dst, src);
	ft_strlcat(dst, src, 12);
	printf("dst = %s src = %s\n", dst, src);
	printf("j = %lu\n", ft_strlcat(dst, src, 12));
	printf("\n");
	printf("dst1 = %s src1 = %s\n", dst1, src1);
	strlcat(dst1, src1, 12);
	printf("dst1 = %s src1 = %s\n", dst1, src1);
	printf("j = %lu\n", strlcat(dst1, src1, 12));
}
