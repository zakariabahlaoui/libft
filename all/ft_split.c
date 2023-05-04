#include "libft.h"

static int ft_count_word(char const *s, char c)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            j++;
            while (s[i] != c && s[i] != '\0')
                i++;
        }
        else
            i++;
    }
    return j;
}

static int ft_len_word(char const *s, char c, int i)
{
    int size;

    size = 0;
    while (s[i] != c && s[i])
    {
        size++;
        i++;
    }
    return size;
}

char **ft_split(char const *s, char c)
{
    int i;
    int word;
    char **str;
    int len;
    int j;

    i = 0;
    j = 0;
    word = ft_count_word(s, c);
    str = (char **)malloc((word + 1) * sizeof(char *));
    if (str == NULL)
        return (NULL);
    while (j < word)
    {
        while (s[i] == c)
            i++;
        len = ft_len_word(s, c, i);
        str[j] = ft_substr(s, i, len);

        i += len;
        j++;
    }
    str[j] = 0;
    return str;
}
