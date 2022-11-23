/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:05:52 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/10 22:05:52 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int main (void)
{
   const char *src;
   char *dest;
   const char *src1;
   char *dest1;
//    strcpy(dest,"");
//    strcpy(dest1,"");
   printf("Before memcpy dest = %s\n", dest);
   //memcpy(dest, src, 2);
   printf("After memcpy dest = %s\n", dest);
   printf("Before ft_memcpy dest = %s\n", dest1);
   ft_memcpy(dest1, src1, 2);
   printf("After ft_memcpy dest = %s\n", dest1);
   return(0);
}
