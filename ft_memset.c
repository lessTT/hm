/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 21:50:12 by storchbu          #+#    #+#             */
/*   Updated: 2019/01/10 16:53:59 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *a, int val, size_t num)
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
