/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 16:31:41 by storchbu          #+#    #+#             */
/*   Updated: 2019/01/15 16:52:44 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		*(new_s + i) = f(*(s + i));
	return (new_s);
}
