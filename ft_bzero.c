#include "libft.h"

void        ft_bzero(void *s, size_t n)
{
    // char *byte;
    // unsigned int i;

    // byte = (char *)s;
    // i = 0;
    // while(n > i )
    // {
    //     byte[i++] = '\0';
    // }
    ft_memset(s, '\0', n);
}