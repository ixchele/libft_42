/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbengued <zbengued@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:17:46 by zbengued          #+#    #+#             */
/*   Updated: 2024/11/06 20:32:52 by zbengued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) && ft_strlen(s) > 0)
		len = ft_strlen(s) - 1;
	if (len > ft_strlen(s) && ft_strlen(s) == 0)
		len = 0;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return NULL;
	i = 0;
	while (s[start] && i < len)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
