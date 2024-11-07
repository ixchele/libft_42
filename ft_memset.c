/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbengued <zbengued@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:56:12 by zbengued          #+#    #+#             */
/*   Updated: 2024/11/06 12:54:56 by zbengued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	val;
	size_t			i;
	
	if (!s)
		return (NULL);
	i = 0;
	ptr = (unsigned char *)s;
	val = (unsigned char)c;
	while (i < n)
		ptr[i++] = val;
	return (s);
}