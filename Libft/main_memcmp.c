/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:43:05 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/15 10:43:05 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	str1[] = "Test";
	char	str2[] = "test";

	printf ("If the output is = to 0 it's meen no difference | ft_memcmp = %i \n", ft_memcmp(str1, str2, 4));
	printf ("If the output is = to 0 it's meen no difference | memcmp = %i \n", memcmp(str1, str2, 4));

}
