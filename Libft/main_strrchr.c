/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:51:08 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/14 14:49:01 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	str[] = "bonjour je m'appel toto !";
	char	chr;
	char	str1[] = "bonjour je m'appel toto !";

	chr = 'z';
	printf ("ft_strrchr \n");
	printf ("the searched char is %c and the scanned str is %s \n", chr, str);
	printf ("This is str stop at the last occurrence of chr -> %s \n", ft_strrchr(str, chr));
	printf ("strrchr \n");
	printf ("the searched char is %c and the scanned str is %s \n", chr, str1);
	printf ("This is str stop at the last occurrence of chr -> %s \n", strrchr(str1, chr));
}
