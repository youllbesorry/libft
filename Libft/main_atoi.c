/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:30:12 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/17 12:30:12 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*str = "9 223 372 036 854 775 807";

	printf ("This is str befor ft_atoi : %s \n", str);
	printf ("This is str after ft_atoi : %i \n", ft_atoi(str));
	printf ("This is str befor atoi : %s \n", str);
	printf ("This is str after atoi : %i \n", atoi(str));
}
