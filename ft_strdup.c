/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 22:30:16 by storchbu          #+#    #+#             */
/*   Updated: 2019/01/15 16:41:36 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		n;
	int		x;

	n = ft_strlen(s1);
	x = 0;
	str = (char *)malloc(sizeof(*str) * ft_strlen(s1) + 1);
	if (str)
	{
		while (x < n)
		{
			str[x] = s1[x];
			x++;
		}
		str[x] = '\0';
		return (str);
	}
	return (NULL);
}
