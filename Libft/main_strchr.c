/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:43:00 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/14 11:40:09 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	str[] = "bonjour je m'appel toto !";
	char	chr;

	chr = '!';
	printf ("ft_strchr \n");
	printf ("the searched char is %c and the scanned str is %s \n", chr, str);
	printf ("This is str stop at the first occurrence of chr -> %s \n", ft_strchr(str, chr));
	printf ("strchr \n");
	printf ("the searched char is %c and the scanned str is %s \n", chr, str);
	printf ("This is str stop at the first occurrence of chr -> %s \n", strchr(str, chr));
}
