/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 19:26:16 by storchbu          #+#    #+#             */
/*   Updated: 2018/12/18 22:57:01 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{	
	char	*str1;
	char	*str2;
	size_t	len1;

	if(!*s2)
		return((void *)s1);
	while(*s1 && len--)
	{
		if (*s1 == *s2)
		{
			len1 = len;
			str1 = (void *)s1 + 1;
			str2 = (void *)s2 + 1;
			while(*str1 && *str2 && len1-- && *str1 == *str2)
			{
				++str1;
				++str2;
			}
			if (!*str2)
				return((void *)s1);
		}
		s1++;
	}
	return (NULL);
}
