/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:52:35 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/17 21:52:35 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	str1[] = "Hello word";
	char	str2[] = "Hello word";

	printf("This is str1 befor ft_substr : %s \n", str1);
	printf("This is the result of ft_substr with str1 : %s \n", ft_substr(str1, 5, 9));
}