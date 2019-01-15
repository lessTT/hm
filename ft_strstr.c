/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 20:48:57 by storchbu          #+#    #+#             */
/*   Updated: 2019/01/15 16:40:12 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*news1;
	char	*news2;

	if (!*s2)
		return ((void *)s1);
	while (*s1)
	{
		if (*s1 == *s2)
		{
			news1 = (void *)s1 + 1;
			news2 = (void *)s2 + 1;
			while (*news1 && *news2 && *news1 == *news2)
			{
				++news1;
				++news2;
			}
			if(!*news2)
				return ((void *)s1);
		}
		s1++;
	}
	return (NULL);
}
