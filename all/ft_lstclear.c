#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *tmp;
    t_list *list;

    list = *lst;
    tmp = NULL;
    while (list != NULL)
    {
        if (list->next)
            tmp = list->next;
        else
            tmp = NULL;
        del(list->content);
        free(list);
        list = tmp;
    }
    *lst = NULL;
}
