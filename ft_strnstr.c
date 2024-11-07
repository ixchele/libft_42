/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbengued <zbengued@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:39:41 by zbengued          #+#    #+#             */
/*   Updated: 2024/11/04 12:50:32 by zbengued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	y;

	if (!to_find[0])
		return ((char *)str);
	for (i = 0; str[i] && i < len; i++)
	{
		if (str[i] == to_find[0])
		{
			y = 0;
			while (to_find[y] && str[i + y] == to_find[y] && (i + y) < len)
				y++;
			if (!to_find[y])
				return ((char *)(str + i));
		}
	}
	return (NULL);
}
