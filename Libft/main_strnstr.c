/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:10:10 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/15 13:10:10 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	str1[] = "hello, bonjour, bonjourno";
	char	str2[] = "bonjour";

	printf ("We shearch %s in %s \n", str2, str1);
	printf ("We find %s in %s \n", ft_strnstr(str1, str2, 25), str1);
	printf ("Strnstr shearch %s in %s \n", str2, str2);
	printf ("Strnstr find %s in %s \n", strnstr(str1, str2, 25), str1);
}