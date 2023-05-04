#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    t_list *elm;

    elm = new;
    elm->next = *lst;
    *lst = elm;
}
