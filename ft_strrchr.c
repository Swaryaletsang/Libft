#include "libft.h"

char        *ft_strrchr(const char *s, int c)
{
    size_t i;
    char *str;
    
    str = (char *)s;
    i = ft_strlen(str);
    while (str[i] != c)
    {
        i--;
    }
    if (str[i] == (char)c)
        return ((char *)&str[i]);
    return (NULL);
}