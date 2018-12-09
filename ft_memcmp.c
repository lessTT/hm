/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:50:37 by storchbu          #+#    #+#             */
/*   Updated: 2018/12/09 22:04:02 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *one, const void *two, size_t n)
{
	size_t		res;
	unsigned char	*str_one;
	unsigned char	*str_two;

	str_one = (unsigned char *)one;
	str_two = (unsigned char *)two;
	res = 0;
	while (n > res++ && *str_one == *str_two)
	{
		str_one++;
		str_two++;
	}
	if (n == res)
		return (0);
	return (*str_one - *str_two);
}
