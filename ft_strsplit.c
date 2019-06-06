/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:27:40 by atau              #+#    #+#             */
/*   Updated: 2019/06/06 18:15:55 by atau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		st_wordcount(char *str,char c)
{
		size_t i;
		size_t j;
		size_t count;

		i = 0;
		while (str[i] != '\0')
		{
				j = 0;
				while (str[j] == c)
						j++;
				if (j > 0 && str[j + 1] != '\0')
						count++;
				i++;
		}
				return(count);
}

char		**ft_strsplit(char const *s, char c)
{
		size_t		numOfWrd;
		int			i;
		char		**arr;
		int			j;

		numOfWrd = st_wordcount(s, c);
		if (!(arr = (char **)malloc(sizeof(char *) * numOfWrd + 1)))
				return (NULL);
		while (*arr[i] != NULL)
		{
				while (s[])
				*arr[i] = ft_strsub(s, i, i -);
		}
}
