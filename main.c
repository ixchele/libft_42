#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void *f(void *p)
{
	int i = 0;
	int j = 0;
	char *ptr;
	char *ls = (char *)p;
	ptr = calloc(sizeof(char), (strlen(ls + 1)));
	while (ls[i])
	{
		if (ft_isalpha(ls[i]))
			ptr[j++] = ls[i++];
		else 
			i++;
	}
	return (ptr);
}

void del(void *p)
{
	p = 0;
}

void afficherListe(t_list *liste)
{
		if (liste == NULL)
			return ;
	    t_list *actuel = liste;
		while (actuel != NULL)
		{
			// ft_lstiter(actuel, f);
			printf("%s", actuel->content);
			actuel = actuel->next;
		}
		printf("NULL\n");
}
// Fonction pour créer un nouvel élément de liste

int main ()
{
	t_list *lst = NULL;
	t_list *newlst = NULL;

	ft_lstadd_front(&lst, ft_lstnew("zakaria"));
	ft_lstadd_front(&lst, ft_lstnew("wa3r"));
	ft_lstadd_front(&lst, ft_lstnew("chwiya"));
	newlst = ft_lstmap(lst, f, del);
	ft_lstdelone(ft_lstlast(newlst), del);
	afficherListe(lst);
	afficherListe(newlst);
	// while (lst)
	// {
	// 	ft_lstiter(lst->content, f);
	// 	printf("%s\n",(char *)lst->content);
	// 	lst = lst->next;
	// }
}
// Fonction de test principale
