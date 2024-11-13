/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbengued <zbengued@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 09:57:26 by zbengued          #+#    #+#             */
/*   Updated: 2024/11/13 10:37:38 by zbengued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		list = ft_lstnew(lst->content);
		list->content = f(list->content);
		if (!list)
			ft_lstclear(&list, del);
		ft_lstadd_back(&new, list);
		lst = lst->next;
	}
	return (new);
}
