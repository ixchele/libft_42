/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbengued <zbengued@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:56:12 by zbengued          #+#    #+#             */
/*   Updated: 2024/11/09 10:00:13 by zbengued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char		*ptr;
	size_t		i;

	if (!s)
		return (NULL);
	i = 0;
	ptr = (char *)s;
	while (i < n)
		ptr[i++] = c;
	return (s);
}
