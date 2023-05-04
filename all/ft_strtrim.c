#include "libft.h"

size_t ft_start(const char *s, const char *set)
{
    size_t i = 0;

    while (s[i])
    {
        if (ft_strchr(set, s[i]) == 0)
            break;
        i++;
    }
    return i;
}

size_t ft_last(const char *s, const char *set)
{
    size_t i;
    size_t len;

    len = ft_strlen(s);
    i = 0;
    while (i < len)
    {
        if (ft_strchr(set, s[len - i - 1]) == 0)
            break;
        i++;
    }

    return len - i;
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    size_t start;
    size_t last;

    if (s1 == NULL)
        return NULL;
    if (set == NULL)
        return ft_strdup(s1);

    start = ft_start(s1, set);
    last = ft_last(s1, set);

    if (start >= last)
        return ft_strdup("");

    str = ft_substr(s1, start, last - start);

    return str;
}

// void expect(const char *result, const char *expected)
// {
//     if (strcmp(result, expected) == 0)
//         printf("OK\n");
//     else
//         printf("expected |%s|, got |%s|\n", expected, result);
// }

// char *ft_strtrim(char const *s1, char const *set);

// int main()
// {
//     char *s1 = ft_strtrim("    abcde    ", " ");
//     expect(s1, "abcde");
//     free(s1);

//     char *s2 = ft_strtrim("abcde", " ");
//     expect(s2, "abcde");
//     free(s2);

//     char *s3 = ft_strtrim("abcde   ", " ");
//     expect(s3, "abcde");
//     free(s3);

//     char *s4 = ft_strtrim("    abcde", " ");
//     expect(s4, "abcde");
//     char *s5 = ft_strtrim("            ", " ");
//     char *s6 = ft_strtrim("  ab; ; cde  ; ", "; ");

//     return 0;
// }
