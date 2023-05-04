#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *v;
    int i;

    v = (char *)s;
    i = ft_strlen(v);

    while (i >= 0)
    {
        if (v[i] == (char)c)
            return &v[i];
        i--;
    }

    return NULL;
}
