#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i;
    long dec;
    int negative;

    negative = 1;
    dec = 0;

    i = 0;
    while (nptr[i] && (nptr[i] == ' ' || nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == '\t' || nptr[i] == '\n'))
        i++;
    if (nptr[i] == '+')
        i++;
    else if (nptr[i] == '-')
    {
        i++;
        negative = -1;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        dec = dec * 10 + (nptr[i] - '0');
        i++;
    }

    return dec * negative;
}
