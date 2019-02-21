/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:39:20 by storchbu          #+#    #+#             */
/*   Updated: 2019/02/21 19:39:23 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;
	t_list *nlist;

	list = f(lst);
	nlist = list;
	if (lst && f)
	{
		while (lst->next)
		{
			lst = lst->next;
			list->next = f(lst);
			if (list->next == NULL)
				return (NULL);
			list = list->next;
		}
		return (nlist);
	}
	return (NULL);
}
