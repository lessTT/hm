/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 16:53:09 by storchbu          #+#    #+#             */
/*   Updated: 2019/01/15 16:55:03 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_s;
	int		i;

	i = -1;
	if (!s)
		return (NULL);
	new_s = ft_strnew(ft_strlen(s));
	if (!new_s)
		return (NULL);
	while (*(s + ++i))
		*(new_s + i) = f(i, *(s + i));
	return (new_s);
}
