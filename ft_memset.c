 #include "libft.h"

void        *ft_memset(void *s, int c, size_t n)
{
    char *b;
    unsigned int i;

    i = 0;
    b = (char *)s;
    while(i < n)
    {
        b[i] = c;
        i++;
    }
    return (s);
}