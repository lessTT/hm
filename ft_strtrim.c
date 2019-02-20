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
//	char	*new_s;
//	int		i;
//	size_t	si;
//
//	i = 0;
//	if (s)
//	{
//		si = ft_strlen(s) ;
//		while (*(s + i) == ' ' || *(s + i) == '\t' || *(s + i) == '\n')
//			i++;
//		if (!*(s + i))
//            return (ft_strnew(0));
//		while (*(s + si) == ' ' || *(s + si) == '\t' || *(s + si) == '\n')
//			si--;
//		new_s = ft_strsub(s, i, si - i + 1);
//		return (new_s);
//	}
//	return (NULL);

	char			*str;
	size_t			len;
	int				i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	if (s[i] == '\0')
		return (ft_strnew(0));
	len = ft_strlen(s);
	while (s[len] == ' ' || s[len] == '\t' || s[len] == '\n' || s[len] == '\0')
		len--;
	str = ft_strsub(s, i, len - i + 1);
	return (str);
}
