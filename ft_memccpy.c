/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 20:57:21 by storchbu          #+#    #+#             */
/*   Updated: 2018/12/10 00:07:31 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *s1 = (char *)src;
	char *s2 = (char *)dest;

	while (n--)
	{
		if (*s1 == c)
			return (s2 + 1);
		*s2 = *s1;
		s2++;
		s1++;
	}
	return (NULL);
}
