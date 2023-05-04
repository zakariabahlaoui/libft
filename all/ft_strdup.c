#include "libft.h"

char *ft_strdup(const char *src)
{
    char *str;
    int len;

    len = ft_strlen(src) + 1;

    str = (char *)malloc(len * sizeof(char));

    if (str == NULL)
        return NULL;

    return ft_memcpy(str, src, len);
}
