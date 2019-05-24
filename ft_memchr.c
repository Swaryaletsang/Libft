/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:19:01 by atau              #+#    #+#             */
/*   Updated: 2019/05/24 14:48:47 by atau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;
	unsigned int	i;

	str = (char *)s;
	i = 0;
	while (i++ < n)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)&str[i]);
	}
	return (NULL);
}
