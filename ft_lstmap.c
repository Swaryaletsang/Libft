/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atau <marvin@42.fr>                  		+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 19:10:28 by oarabetse         #+#    #+#             */
/*   Updated: 2019/06/14 01:54:40 by oarabetse        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
		t_list *new;
		t_list *iter;

		new = (t_list *)malloc(sizeof(t_list));
		if (new == NULL)
				return (NULL);
		iter = f(lst);
		new = iter;
		while (lst->next != NULL )
		{
				lst = lst->next;
				new->next = f(lst);
				new = new->next;
		}
		new->next = NULL;
		return (new);
}
