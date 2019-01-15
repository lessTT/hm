/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 20:43:08 by storchbu          #+#    #+#             */
/*   Updated: 2019/01/15 16:40:16 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *end;

	end = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			end = (char*)s;
		s++;
	}
	if (*s == (char)c)
		return ((char*)s);
	else
		return (end);
}
