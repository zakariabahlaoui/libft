#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *str;
    size_t s_len;

    if (s == NULL)
        return NULL;

    s_len = ft_strlen(s);
    if (s_len < start)
        return ft_strdup("");
    if (s_len < (start + len))
    {
        str = (char *)malloc(sizeof(char) * ((s_len - start) + 1));
    }
    else
    {
        str = (char *)malloc(sizeof(char) * (len + 1));
    }

    i = 0;
    while (i < len && s[start])
    {
        str[i] = s[start];
        i++;
        start++;
    }

    str[i] = '\0';
    return str;
}

//     unsigned int i;
//     size_t j;
//     char *str;

//     str = (char *)malloc(sizeof(char) * (len + 1));
//     if (str == NULL)
//         return NULL;
//     i = 0;
//     while (i < len )
//     {
//         str[i] = s[start];
//         i++;
//         start++;
//     }

//     str[i] = '\0';
//     return str;