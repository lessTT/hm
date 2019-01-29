/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:49:10 by storchbu          #+#    #+#             */
/*   Updated: 2019/01/29 12:00:27 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*new_s;
	int		i;
	int		si;
	int		j;

	j = 0;
	i = 0;
	if (s)
	{
		si = ft_strlen(s) - 1;
		while (*(s + i) == ' ' || *(s + i) == '\t' || *(s + i) == '\n')
			i++;
		if (!*(s + i))
			return ((char *)(s + i));
		while (*(s + si) == ' ' || *(s + si) == '\t' || *(s + si) == '\n')
			si--;
		new_s = ft_strsub(s, i, si - i + 1);
		return (new_s);
	}
	return (NULL);
}
