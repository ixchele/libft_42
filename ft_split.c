/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbengued <zbengued@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:21:55 by zbengued          #+#    #+#             */
/*   Updated: 2024/11/10 11:37:04 by zbengued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word_and_len(char const *s, char c, int mode, size_t j)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (mode == 1)
	{
		while (s[j] && s[j] != c)
		{
			j++;
			count++;
		}
		return (count);
	}
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else 
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_freer(char **tab, size_t i)
{
    while (i > 0)
		free(tab[--i]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;

	if (!s) 
		return (NULL);
	i = 0;
	j = 0;
	tab = ft_calloc(count_word_and_len(s, c, 0, 0), sizeof(char *));
	if (!s)
		return (NULL);
    while (j < count_word_and_len(s, c, 0, 0))
    {
        while (s[i] == c && s[i])
            i++;
        tab[j] = ft_substr(s, i, count_word_and_len(s, c, 1, i));
        if (!tab[j])
            ft_freer(tab, j);
        j++;
        while (s[i] != c && s[i])
            i++;
    }
	return (tab);
}
