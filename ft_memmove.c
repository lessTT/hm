/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:02:41 by storchbu          #+#    #+#             */
/*   Updated: 2018/12/12 00:54:18 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *str);

void	*ft_memmove(void *dest, const void *src, size_t nb) //(куда, откуда, сколько)
{
	size_t	cout;
	char	*s1;
	char	*d1;

	s1 = (char *)src;
	d1 = (char *)dest;
	cout = -1;

	if(s1 < d1)
	{
		while((int)--nb >= 0)
			d1[nb] = s1[nb];
	}
	else
	{
		while(nb > ++cout)
			d1[cout] = s1[cout];
	}
	return (d1);
}
