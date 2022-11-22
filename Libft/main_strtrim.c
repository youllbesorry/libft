/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:04:20 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/22 13:32:13 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	str[] = "123_cou213cou_321";
	char	set[] = "123";
	char	*dest = ft_strtrim(str, set);

	printf ("This is str before ft_strtrim : %s\n", str);
	printf ("This is str after ft_strtrim : %s\n", dest);
	free (dest);
}
