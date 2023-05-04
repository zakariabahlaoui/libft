#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *s;
    char *d;

    s = (char *)src;
    d = (char *)dest;
    if (d > s)
    {
        while (n-- > 0)
        {
            d[n] = s[n];
        }
    }
    else
        ft_memcpy(dest, src, n);
    return dest;
}
