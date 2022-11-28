/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:18:33 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/14 17:31:53 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	str[] = "bonjour je m'appel toto !";
	char	str1[] = "bonjour je m'appel toto !";
	char	chr;

	chr = '!';
	printf ("ft_memchr \n");
	printf ("the searched char is %c and the scanned str is %s \n", chr, str);
	printf ("This is str stop at the first occurrence of chr -> %s \n", ft_memchr(str, chr, 25));
	printf ("memchr \n");
	printf ("the searched char is %c and the scanned str is %s \n", chr, str);
	printf ("This is str stop at the first occurrence of chr -> %s \n", memchr(str1, chr, 25));
}
