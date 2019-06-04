/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:50:56 by atau              #+#    #+#             */
/*   Updated: 2019/06/04 15:13:20 by atau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char		*ft_strtrim(char const *s1)
{
	char	*str;
	int		i;
	int		len;
	int		j;
	int		finallen;

	if (!s1)
		return (NULL);
	i = 0;
	while (ft_isspace(s1[i]))
	{
		i++;
	}
	len = ft_strlen(s1);
	while ((ft_isspace(s1[len]) || s1[len] == '\0') && len > 0)
	{
		len--;
	}
	finallen = len - i;
	if (finallen < 0)
		finallen = -1;
	if (!(str = (char *)malloc(sizeof(char) * (finallen + 2))))
		return (NULL);
	j = 0;
	while (s1[i] != '\0' && i <= len)
	{
		str[j++] = s1[i++];
	}
	str[j] = '\0';
	return (str);
}
/*
int main(void)
{
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char *s2 = "Hello \t  Please\n Trim me !";
	char *ret = ft_strtrim(s1);
	int	size = strlen(s2);

	if (!strcmp(ret, s2))
	{
		printf("%s", ret);
	}
	printf("%d", size);
	free(ret);
return (0);
}*/
