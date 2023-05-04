#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;
    t_list *elm;
    t_list *tail;

    elm = NULL;
    new_list = NULL;
    tail = NULL;
    while (lst)
    {
        elm = ft_lstnew(f(lst->content));
        if (elm == NULL)
        {
            ft_lstclear(&new_list, del);
            return NULL;
        }
        // ft_lstadd_back(&new_list, elm);
        if (new_list == NULL)
        {
            new_list = elm;
            tail = elm;
        }
        else
        {
            tail->next = elm;
            tail = elm;
        }
        lst = lst->next;
    }

    return new_list;
}
