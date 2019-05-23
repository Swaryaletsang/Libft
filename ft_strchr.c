#include "libft.h"

char        *ft_strchr(const char *s, int c)
{
    char *str;
    int     i;

    i = 0;
    str = (char *)s;
    while (str[i++])
    {
        if (str[i] == c)
        {
            return ((char *)&str[i]);
        }
    }
    return (NULL);
}