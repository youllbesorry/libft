/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:05:45 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/10 22:05:48 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
# include <stdio.h>
# include "libft.h"

int main(void)
{
	char	test[] = "Hello world";
	char	*str = strdup(test);

	printf("%s\n", ft_memset(str, 'a', 2));
	printf("%s\n", memset(str, 'a', 2));
}
