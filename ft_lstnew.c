/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:38:14 by storchbu          #+#    #+#             */
/*   Updated: 2019/02/21 19:52:03 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;

	list = (t_list*)malloc(sizeof(*list) * content_size);
	if (list)
	{
		if (content == NULL)
		{
			list->content = NULL;
			list->content_size = 0;
			list->next = NULL;
		}
		else
		{
			if (!(list->content = malloc(content_size)))
			{
				return (NULL);
				free(list);
			}
			ft_memcpy(list->content, content, content_size);
			list->content_size = content_size;
			list->next = NULL;
		}
		return (list);
	}
	return (NULL);
}
