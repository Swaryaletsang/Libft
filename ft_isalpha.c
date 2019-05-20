/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:09:28 by atau              #+#    #+#             */
/*   Updated: 2019/05/20 15:26:07 by atau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int         ft_isalpha(int c)
{
    unsigned char ch;

    ch = (unsigned char)c;
    if((ch >= 'a' && ch<= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
