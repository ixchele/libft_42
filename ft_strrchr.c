/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbengued <zbengued@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:46:50 by zbengued          #+#    #+#             */
/*   Updated: 2024/11/09 10:09:06 by zbengued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	char		chr;

	i = ft_strlen(s);
	chr = (char)c;
	while (i > 0 && chr != s[i])
		i--;
	if (s[i] == chr)
		return ((char *)s + 1);
	else
		return (NULL);
}
