#include "libft.h"

void        *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned int i;
    char *d;
    char *s;

    d = (char *)dest;
    s = (char *)src;
    i = 0;
    if(d >= s)
    {
        while(n > i)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (d);
}