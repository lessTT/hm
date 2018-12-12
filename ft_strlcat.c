/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 05:36:11 by storchbu          #+#    #+#             */
/*   Updated: 2018/12/12 06:20:25 by storchbu         ###   ########.fr       */
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
