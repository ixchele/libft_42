/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbengued <zbengued@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:45:26 by zbengued          #+#    #+#             */
/*   Updated: 2024/11/04 11:29:21 by zbengued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcat(char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}

char  *ft_cpy(const char *s1, char *dest)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	char	*cpy;

	cpy = malloc(sizeof (char) * (ft_strlen(s1) + 1));
	if (!cpy)
		return (NULL);
	ptr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(cpy) + 1));
	if (!ptr)
		return (NULL);
	ptr = ft_strcat(ft_cpy(s1, cpy), s2);
	return (ptr);
}
