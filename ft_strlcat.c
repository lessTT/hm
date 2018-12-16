/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 05:36:11 by storchbu          #+#    #+#             */
/*   Updated: 2018/12/16 20:48:15 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	f_strlcat(char *dest, const char *src, size_t size)
{
	size_t	total;

	while (*src && size--)
		dest[size++] = *src++;
	dest[size] = '\0';
	total = ft_strlen(dest);
	return (total);
}


// {
// 	char		*d;
// 	const char	*s;
// 	size_t		n;
// 	size_t		dlen;

// 	d = dst;
// 	s = src;
// 	n = size;
// 	while (n-- != 0 && *d != '\0')
// 		d++;
// 	dlen = d - dst;
// 	n = size - dlen;
// 	if (n == 0)
// 		return (dlen + ft_strlen(s));
// 	while (*s != '\0')
// 	{
// 		if (n != 1)
// 		{
// 			*d++ = *s;
// 			n--;
// 		}
// 		s++;
// 	}
// 	*d = '\0';
// 	return (dlen + (s - src));
// }