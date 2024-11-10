/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbengued <zbengued@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:21:55 by zbengued          #+#    #+#             */
/*   Updated: 2024/11/10 11:52:46 by zbengued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
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
	size_t	word_len;

	if (!s) 
		return (NULL);
	i = 0;
	j = 0;
	tab = ft_calloc(count_word(s, c), sizeof(char *));
	if (!s)
		return (NULL);
    while (j < count_word(s, c))
    {
		word_len = 0;
        while (s[i] == c && s[i])
            i++;
		while (s[i] != c && s[i])
		{
			i++;
			word_len++;
		}
        tab[j] = ft_substr(s, i - 1, word_len);
        if (!tab[j])
            ft_freer(tab, j);
        j++;
    }
	return (tab);
}
