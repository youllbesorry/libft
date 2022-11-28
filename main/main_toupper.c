/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 23:37:16 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/12 23:37:16 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	c;

	c = 'z';
	printf ("C befor my toupper %i \n", c);
	printf ("C after my toupper %i \n", ft_toupper (c));
	printf ("\n");
	c = 'z';
	printf ("C befor the original toupper %i \n", c);
	printf ("C after the original toupper %i \n", toupper (c));
}
