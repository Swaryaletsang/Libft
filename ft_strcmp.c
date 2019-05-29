/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:57:31 by atau              #+#    #+#             */
/*   Updated: 2019/05/29 16:34:16 by atau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strcmp(const char *str1, const char *str2)
{
	int i;
	char *s1;
	char *s2;

	i = 0;
	s1 = (char *)str1;
	s2 = (char *)str2;
	if (s1 != NULL || s2 != NULL)
	{
		while (s1[i] != '\0' || s2[i] != '\0')
		{
			if (str1[i] != str2[i])
				return (str1[i] - str2[i]);
			i++;
		}
	}
	return (0);
}
