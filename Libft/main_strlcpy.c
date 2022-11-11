/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:54:00 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/11 15:27:30 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char		dst[] = "test";
	const char	src[] = "hello world";
	char		dst1[] = "test";
	const char	src1[] = "hello world";

	printf("dst = %s src = %s\n", dst, src);
	ft_strlcpy(dst, src, 4);
	printf("dst = %s src = %s\n", dst, src);
	printf("\n");
	printf("dst1 = %s src1 = %s\n", dst1, src1);
	strlcpy(dst1, src1, 4);
	printf("dst1 = %s src1 = %s\n", dst1, src1);
}
