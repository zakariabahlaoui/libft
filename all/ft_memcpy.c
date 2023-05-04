#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char *s;
    char *d;

    s = (char *)src;
    d = (char *)dest;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return dest;
}
