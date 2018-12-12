/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 18:33:20 by storchbu          #+#    #+#             */
/*   Updated: 2018/12/12 03:00:13 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char *newstr;

	newstr = (char *)str;
	while (n--)
	{
		if (*newstr == c)
			return ((unsigned char *)newstr);
		newstr++;
	}
	return (0);
}
