/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:05:08 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/17 15:05:08 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	*a;
	int	n;
	int	i;
	int	*b;
	
	n = 3;
	a = (int*)calloc(n, sizeof(int));
	i = 0;
	while (i != n)
	{
		a[i] = i;
		i++;
	}
	i = 0;
	printf ("This is calloc :\n");
	while (i != n + 1)
	{
		printf ("%i \n", a[i]);
		i++;
	}
	b = (int*)ft_calloc(n, sizeof(int));
	i = 0;
	while (i != n)
	{
		b[i] = i;
		i++;
	}
	i = 0;
	printf ("This is ft_calloc :\n");
	while (i != n + 1)
	{
		printf ("%i \n", b[i]);
		i++;
	}
	free (a);
	free (b);
}