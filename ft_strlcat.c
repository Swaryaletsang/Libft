/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:48:44 by atau              #+#    #+#             */
/*   Updated: 2019/06/03 16:02:52 by atau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	int		j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0' && i + 1 < destsize)
		dest[i++] = src[j++];
	if (ft_strlen(dest) < destsize)
		dest[i] = '\0';
	if (ft_strlen(dest) > destsize)
		return (destsize + ft_strlen(src));
	else
		return (ft_strlen(dest) + ft_strlen(src));
}
