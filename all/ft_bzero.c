#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t i;
    char *b;

    b = (char *)s;
    i = 0;
    while (i < n)
    {
        b[i] = 0;
        i++;
    }
}
