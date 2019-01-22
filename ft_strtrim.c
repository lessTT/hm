/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:49:10 by storchbu          #+#    #+#             */
/*   Updated: 2019/01/22 21:54:32 by storchbu         ###   ########.fr       */
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
	si = ft_strlen(s) - 1;
	new_s = ft_strnew(si);
	if (!s || !new_s)
		return (NULL);
	while (*(s + i))
	{
		while (*(s + i) == ' ' || *(s + i) == '\t' || *(s + i) == '\n')
			i++;
		while (*(s + si) == ' ' || *(s + si) == '\t' || *(s + si) == '\n')
			si--;
		while (si >= i)
			*(new_s + j++) = *(s + i++);
	}
	return (new_s);
}
