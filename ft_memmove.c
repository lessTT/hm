/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:02:41 by storchbu          #+#    #+#             */
/*   Updated: 2019/01/10 16:54:07 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t nb)
{
	size_t	cout;
	char	*s1;
	char	*d1;

	s1 = (char *)src;
	d1 = (char *)dest;
	cout = -1;
	if (s1 < d1)
	{
		while ((int)--nb >= 0)
			d1[nb] = s1[nb];
	}
	else
	{
		while (nb > ++cout)
			d1[cout] = s1[cout];
	}
	return (d1);
}
