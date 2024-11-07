/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbengued <zbengued@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:36:45 by zbengued          #+#    #+#             */
/*   Updated: 2024/11/02 10:17:23 by zbengued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	val_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int	digit_cnt(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*ft_inv(char *str)
{
	int		i;
	int		j;
	char	x;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	i--;
	while (i > j)
	{
		x = str[i];
		str[i] = str[j];
		str[j] = x;
		i--;
		j++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*ptr;
	int		n_index;

	i = 0;
	n_index = n;
	ptr = malloc(sizeof(char) * (digit_cnt(n) + 1));
	if (!ptr)
		return (NULL);
	if (n == 0)
		return ("0");
	if (n == 2147483647)
		return ("2147483647");
	while (n_index)
	{
		ptr[i] = val_abs(n_index % 10) + '0';
		n_index /= 10;
		i++;
	}
	if (n < 0)
		ptr[digit_cnt(n) - 1] = '-';
	ptr[digit_cnt(n)] = '\0';
	return (ft_inv(ptr));
}
