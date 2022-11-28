/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:14:44 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/15 11:41:29 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	str1[] = "Test";
	char	str2[] = "test";

	printf ("If the output is = to 0 it's meen no difference | ft_strncmp = %i \n", ft_strncmp(str1, str2, 6));
	printf ("If the output is = to 0 it's meen no difference | strncmp = %i \n", strncmp(str1, str2, 6));

}
