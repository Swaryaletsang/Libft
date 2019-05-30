#include "libft.h"

char        *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *substr;
    int i;

    i = 0;
    if (s == NULL)
        return (NULL);
    while(++start <= len)
    {
        i++;
    }
    if(!(substr = (char *)malloc(i + 1)))
        return (NULL);
    i = 0;
    while ((len-- > 0) && (s[start] != '\0'))
    {
        substr[i++] = s[start++];
    }
    return (substr);
}