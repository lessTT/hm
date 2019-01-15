/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 04:55:24 by storchbu          #+#    #+#             */
/*   Updated: 2019/01/15 16:42:09 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int size;

	size = ft_strlen(dest);
	while (*src)
		dest[size++] = *src++;
	dest[size] = '\0';
	return (dest);
}
