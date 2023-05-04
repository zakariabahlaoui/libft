#include "libft.h"

static int ft_length(int n)
{
    int i;
    i = 0;
    while (n != 0)
    {
        n = n / 10;
        i++;
    }
    return i;
}

char *ft_calcul(long int n, int len)
{
    int i;
    int r;
    char *buff;

    if (n < 0)
        n = n * (-1);

    buff = (char *)malloc(len + 1);
    i = 0;
    while (i < len)
    {
        r = n % 10;
        n = n / 10;
        buff[i] = r + '0';
        i++;
    }
    buff[i] = 0;
    return buff;
}

char *ft_itoa(int n)
{
    char *str;
    char *buff;
    int j;
    int length;

    if (n == 0)
        return ft_strdup("0");
    length = ft_length(n);
    str = (char *)malloc(length + 1);
    buff = ft_calcul(n, length);

    j = 0;
    if (n < 0)
    {
        str = (char *)malloc(length + 2);
        str[j] = '-';
        j++;
    }
    length--;
    while (length >= 0)
    {
        str[j] = buff[length];
        length--;
        j++;
    }
    str[j] = 0;
    return str;
}
