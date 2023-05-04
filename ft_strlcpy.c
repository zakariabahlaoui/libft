#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t len;
    size_t i;

    len = 0;
    while (src[len] != '\0')
        len++;
    if (size < 1)
        return len;
    i = 0;
    while (src[i] != '\0' && i < (size - 1))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return len;
}
