/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbengued <zbengued@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:21:55 by zbengued          #+#    #+#             */
/*   Updated: 2024/11/10 13:52:13 by zbengued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char const *s, char c, int mode, size_t j)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[j] != c && s[j] && mode == 1)
	{
		j++;
		count++;
	}
	while (s[i] && mode == 0)
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

static char	**splinter(char **tab, char const *s, size_t i, char c)
{
	size_t	start;
	size_t	j;

	j = 0;
	while (j < count_word(s, c, 0, 0))
	{
		while (s[i] == c && s[i])
			i++;
		tab[j] = ft_substr(s, start, count_word(s, c, 1, i));
		if (!tab[j])
		{
			while (i > 0)
				free(tab[--i]);
			free(tab);
		}
		j++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	tab = ft_calloc(count_word(s, c, 0, 0) + 1, sizeof(char *));
	if (!tab)
		return (NULL);
	tab = splinter(tab, s, i, c);
	return (tab);
}
