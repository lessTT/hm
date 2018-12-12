/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 20:35:53 by storchbu          #+#    #+#             */
/*   Updated: 2018/12/12 02:59:14 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *s1;
	char *s2;

	s1 = (char *)src;
	s2 = (char *)dst;
	while (n--)
	{
		*s2 = *s1;
		s1++;
		s2++;
	}
	return (dst);
}
