/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atau <marvin@42.fr>                   		+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 17:06:31 by oarabetse         #+#    #+#             */
/*   Updated: 2019/06/13 17:56:51 by oarabetse        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
		del(*alst->content, *alst->content_size);
		if(!*alst->next)
				return;
		ft_lstdel(&(*alst->next), del);
		free(*alst);
}
