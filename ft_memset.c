/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 21:50:12 by storchbu          #+#    #+#             */
/*   Updated: 2018/12/09 19:16:41 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *a, int val, size_t num) //(строка, на что, сколько)
{
	char *str;
	size_t change;

	change = 0;
	str = a;
	while (num > change)
	{
		str[change] = val;
		change++;
	}
	return (str);
}
