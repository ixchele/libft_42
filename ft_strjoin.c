/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbengued <zbengued@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:45:26 by zbengued          #+#    #+#             */
/*   Updated: 2024/11/11 10:09:59 by zbengued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static	char	*ft_strcat(char *s1, const char *s2)
// {
// 	size_t	i;
// 	size_t	j;
//
// 	i = 0;
// 	j = 0;
// 	while (s1[i])
// 		i++;
// 	while (s2[j])
// 	{
// 		s1[i + j] = s2[j];
// 		j++;
// 	}
// 	s1[i + j] = '\0';
// 	return (s1);
// }
//
// static	char	*ft_cpy(const char *s1, char *dest)
// {
// 	size_t	i;
//
// 	i = 0;
// 	while (s1[i])
// 	{
// 		dest[i] = s1[i];
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }
//
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	ptr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, ft_strlen(s1));
	ft_strlcat(ptr, ft_strlen(s2));
	return (ptr);
}
