/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbengued <zbengued@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:21:55 by zbengued          #+#    #+#             */
/*   Updated: 2024/11/10 10:07:13 by zbengued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words_len(char const *str, char c, int mode, int j)
{
	size_t (cont), (i);
	cont = 0;
	i = 0;
	while (i < ft_strlen(str))
	{
		while (str[i] == c && str[i] && mode == 0)
			i++;
		while (str[i] != c && str[i] && mode == 0)
		{
			i++;
			if (str[i] == c || !str[i])
				cont++;
		}
		while (str[i] == c && str[i] && mode == 0)
			i++;
		while (str[j] != c && str[j] && mode == 2)
		{
			cont++;
			j++;
		}
		i++;
	}
	return (cont);
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
	tab = ft_calloc(count_words_len(s, c, 1, 0) + 1, sizeof(char *));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		tab[j] = ft_substr(s, i, count_words_len(s, c, 2, i));
		if (!tab[j])
			ft_freer(tab, j);
		j++;
		while (s[i] != c && s[i])
			i++;
	}
	return (tab);
}
