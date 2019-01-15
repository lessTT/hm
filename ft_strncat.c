/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 05:14:38 by storchbu          #+#    #+#             */
/*   Updated: 2019/01/15 16:40:48 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int size;

	size = ft_strlen(dest);
	while (*src && n--)
		dest[size++] = *src++;
	dest[size] = '\0';
	return (dest);
}
