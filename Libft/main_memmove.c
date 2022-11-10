/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:31:19 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/10 22:31:19 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
# include <stdio.h>
# include "libft.h"

int main(void)
{
	const char	src[] = "test";
	char		dest[] = "hello world";

	/*printf("%s\n", ft_memmove(dest, src, 12));*/
    printf("Before ft_memmove dest = %s, src = %s\n", dest, src);
    ft_memmove(dest, src, 9);
    printf("After ft_memmove dest = %s, src = %s\n", dest, src);  
    printf("\n"); 
    printf("Before memmove dest = %s, src = %s\n", dest, src);
    memmove(dest, src, 9);
    printf("After memmove dest = %s, src = %s\n", dest, src);

	return (0);
	
}
