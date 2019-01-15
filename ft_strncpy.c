/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 21:26:24 by storchbu          #+#    #+#             */
/*   Updated: 2019/01/15 16:40:32 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t l;

	l = -1;
	while (++l < n && src[l])
		dest[l] = src[l];
	if (!src[l])
	{
		dest[l] = '\0';
		while (l < n)
			dest[l++] = '\0';
	}
	return (dest);
}
