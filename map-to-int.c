#include "libft.h"

void *f(void *data)
{
    int *r = (int *)malloc(sizeof(int));

    *r = atoi(data);

    return (void *)r;
}

void dummy_del(void *c)
{
    (void)c;
}

void print(void *c)
{
    printf("%d\n", *(int *)c);
}

int main(int argc, char **argv)
{
    t_list *new;
    t_list *list;
    t_list *listn;
    int i;

    list = NULL;
    i = 1;
    while (i < argc)
    {
        listn = ft_lstnew(argv[i]);
        ft_lstadd_front(&list, listn);
        i++;
    }

    new = ft_lstmap(list, &f, free);

    ft_lstiter(new, &print);

    ft_lstclear(&list, dummy_del);
    ft_lstclear(&new, free);

    return 0;
}
