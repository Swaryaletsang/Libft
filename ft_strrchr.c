/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:41:27 by atau              #+#    #+#             */
/*   Updated: 2019/05/24 10:45:40 by atau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*str;

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
