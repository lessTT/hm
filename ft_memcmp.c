/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:50:37 by storchbu          #+#    #+#             */
/*   Updated: 2018/12/12 03:00:22 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *one, const void *two, size_t n)
{
	unsigned char	*str_one;
	unsigned char	*str_two;

	str_one = (void *)one;
	str_two = (void *)two;
	while (n-- && *str_one == *str_two)
	{
		str_one++;
		str_two++;
	}
	if ((int)n == -1)
		return (0);
	return (*str_one - *str_two);
}
