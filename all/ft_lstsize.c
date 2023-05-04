#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;
    t_list *list;

    list = lst;
    i = 0;
    while (list != NULL)
    {
        list = list->next;
        i++;
    }
    return i;
}
