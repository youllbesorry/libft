/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaure <bfaure@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:15:42 by bfaure            #+#    #+#             */
/*   Updated: 2022/11/18 11:15:42 by bfaure           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

<<<<<<< HEAD
char	*ft_strfjoin(char *s1, char *s2)
=======
char	*ft_strjoin(char *s1, char *s2)
>>>>>>> 009952ab54c371bf5382b5b0d063bae12a4bcf7a
{
	char	*str;
	int		i;
	int		k;

	if (!s1 || !s2)
<<<<<<< HEAD
		return (free(s1), NULL);
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!str)
		return (free(s1), NULL);
=======
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!str)
		return (NULL);
>>>>>>> 009952ab54c371bf5382b5b0d063bae12a4bcf7a
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	k = 0;
	while (s2[k])
		str[i++] = s2[k++];
<<<<<<< HEAD
	return (str[i] = '\0', free(s1), str);
=======
	return (str[i] = '\0', str);
>>>>>>> 009952ab54c371bf5382b5b0d063bae12a4bcf7a
}
