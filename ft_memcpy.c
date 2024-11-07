
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbengued <zbengued@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:36:33 by zbengued          #+#    #+#             */
/*   Updated: 2024/11/07 16:22:31 by zbengued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t 			i;
	unsigned char	*ptrs;
	unsigned char	*ptrd;
	
	if (!dest && !src)
		return (NULL);
	ptrs = (unsigned char *)src;
	ptrd = (unsigned char *)dest; 
	i = 0;
	while (i++ < n)
		ptrd[i - 1] = ptrs[i - 1];
	return(dest);
}

