/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:08:40 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/16 12:04:54 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*dest;
	char	src[50] = "test";
	char	*dest1;
	char	src1[50] = "test";
	memset(dest, 0, 15);
	memset(dest1, 0, 15);
	memset(dest, 'r', 14);
	memset(dest1, 'r', 14);

	printf("dst1 = %s src1 = %s\n", dest, src1);
	strlcat(dest, "lorem ipsum dolor sit amet", 5);
	printf("dst1 = %s src1 = %s\n", dest, src1);
	printf("j = %lu\n", strlcat(dest, "lorem ipsum dolor sit amet", 5));
	printf("\n");
	printf("dst = %s src = %s\n", dest1, src);
	ft_strlcat(dest1, "lorem ipsum dolor sit amet", 5);
	printf("dst = %s src = %s\n", dest1, src);
	printf("j = %lu\n", ft_strlcat(dest1, "lorem ipsum dolor sit amet", 5));
}
