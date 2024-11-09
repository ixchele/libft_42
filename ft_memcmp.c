/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbengued <zbengued@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:23:10 by zbengued          #+#    #+#             */
/*   Updated: 2024/11/09 09:58:38 by zbengued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*ps1;
	char	*ps2;
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	ps1 = (char *)s1;
	ps2 = (char *)s2;
	while (i < n && ps1[i] == ps2[i])
		i++;
	return ((unsigned int)ps1[i] - (unsigned int)ps2[i]);
}
