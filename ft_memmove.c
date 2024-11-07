/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbengued <zbengued@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:09:21 by zbengued          #+#    #+#             */
/*   Updated: 2024/11/07 16:24:34 by zbengued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	size_t			j;
	size_t			ind_x;
	unsigned char	*ptrs;
	unsigned char	*ptrd;
	
	if (!dest && !src)
		return (NULL);
	i = 0;
	j = 1;
	ind_x = 0;
	ptrs = (unsigned char *)src;
	ptrd = (unsigned char *)dest;
	if (dest > src)
	{
		j = -1;
		ind_x = n - 1;
	}
	while (i < n)
	{
		ptrd[ind_x] = ptrs[ind_x];
		ind_x += j;
		i++;
	}
	return (dest);
}

