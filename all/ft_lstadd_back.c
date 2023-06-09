#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *curr;

    if (*lst == NULL)
    {
        *lst = new;
        return;
    }
    curr = *lst;

    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = new;
}
