/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbengued <zbengued@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:28:41 by zbengued          #+#    #+#             */
/*   Updated: 2024/11/12 16:41:50 by zbengued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nex;
	t_list	*act;
	
	act = *lst;
	nex = act->next;
	while (act)
	{
		nex = act->next;
		del(act->content);
		free(act);
		act = nex;
	}
}
