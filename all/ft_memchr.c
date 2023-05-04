#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    char *str;
    size_t i;

    str = (char *)s;

    i = 0;
    while (i < n)
    {
        if (str[i] == (char)c)
        {
            return &str[i];
        }
        i++;
    }
    return NULL;
}
