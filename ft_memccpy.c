/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 20:57:21 by storchbu          #+#    #+#             */
/*   Updated: 2018/12/11 22:57:54 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *s1;
	unsigned char *s2;

	s1 = (unsigned char *)src;
	s2 = (unsigned char *)dest;
	while (n--)
	{
		if (*s1 == (unsigned char)c)
		{
			*s2 = *s1;
			return (s2 + 1);
		}
		*s2 = *s1;
		s2++;
		s1++;
	}
	return (NULL);
}
