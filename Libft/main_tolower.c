/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:24:59 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/14 10:31:09 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	c;

	c = 'A';
	printf ("C befor my toupper %i \n", c);
	printf ("C after my toupper %i \n", ft_tolower (c));
	printf ("\n");
	c = 'A';
	printf ("C befor the original toupper %i \n", c);
	printf ("C after the original toupper %i \n", tolower (c));
}
