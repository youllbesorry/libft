/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:30:20 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/21 18:30:20 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*str = "                                       oui                     non                                                                                                                                             ";
	char	sep = ' ';

	char **pute = ft_split(str, sep);
	while (*pute)
		printf("|%s| \n", *pute++);
}
