/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbengued <zbengued@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:21:55 by zbengued          #+#    #+#             */
/*   Updated: 2024/11/09 09:49:54 by zbengued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words_len(char const *str, char c, int mode, int j)
{
	int (cont), (i);
	cont = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c && mode == 0)
			cont++;
		else if (str[i] != c && mode == 1)
			cont++;
		while (str[j] != c && str[j] && mode == 2)
		{
			cont++;
			j++;
		}
		i++;
	}
	if (!str[i] && mode == 1)
		cont++;
	return (cont);
}

static void	ft_freer(char **tab, int i)
{
	while (i > 0)
		free(tab[--i]);
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	char				**tab;

	unsigned int (i), (j);
	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * (count_words_len(s, c, 1, 0) + 1));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		tab[j++] = ft_substr(s, i, count_words_len(s, c, 2, i));
		if (!tab[j])
		{
			ft_freer(tab, j);
			return (NULL);
		}
		while (s[i] != c && s[i])
			i++;
	}
	return (tab);
}
