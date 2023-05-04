#include "libft.h"

/*
10

a = 5
b = 4

a * b <= 10
a <= 10 / b
{
    // allocate
}

a > 10 / b
{
    // do not allocate
    // return null
}
*/
void *ft_calloc(size_t nmemb, size_t size)
{
    void *p;

    if (nmemb == 0 || size == 0)
        return NULL;
    if (nmemb > SIZE_MAX / size)
        return NULL;

    p = malloc(nmemb * size);

    if (p == NULL)
        return NULL;

    ft_bzero(p, nmemb * size);

    return p;
}
