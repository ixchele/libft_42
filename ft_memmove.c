/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbengued <zbengued@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:09:21 by zbengued          #+#    #+#             */
/*   Updated: 2024/11/09 10:05:00 by zbengued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	size_t			j;
	size_t			ind_x;
	char			*ptrs;
	char			*ptrd;

	if (!dest && !src)
		return (NULL);
	i = 0;
	j = 1;
	ind_x = 0;
	ptrs = (char *)src;
	ptrd = (char *)dest;
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
