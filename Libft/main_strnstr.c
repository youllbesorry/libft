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
	char *s1 = "MZIRIBMZIRIBMZE123";
	char *s2 = "MZIRIBMZE";
	size_t max = ft_strlen(s2);

	printf ("Strnstr shearch %s in %s \n", s2, s1);
	printf ("Strnstr find %s in %s \n", strnstr(s1, s2, max), s1);
	printf ("\n");
	printf ("We shearch %s in %s \n", s2, s1);
	printf ("We find %s in %s \n", ft_strnstr(s1, s2, max), s1);
}
