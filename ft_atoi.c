/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:48:25 by atau              #+#    #+#             */
/*   Updated: 2019/05/30 17:25:44 by atau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(char *str)
{
	int	nb;
	int sign;
	int i;

	nb = 0;
	sign = 1;
	i = 0;
	if((ft_strlen(str) >= 19) && (ft_strcmp("9223372036854775807",str) <= 0))
		return (-1);
	if ((ft_strlen(str) > 19) && (ft_strcmp("-9223372036854775808", str) <= 0))
		return (0);
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
			|| (str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f'))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			nb = (nb * 10) + (str[i] - '0');
		else
			break ;
		i++;
	}
	return (nb * sign);
}
