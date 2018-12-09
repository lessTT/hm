/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:02:41 by storchbu          #+#    #+#             */
/*   Updated: 2018/12/09 21:47:06 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t nb) //(куда, откуда, сколько)
{
	unsigned char *s1 = (unsigned char *)src;
	unsigned char *d1 = (unsigned char *)dest;

	while (nb)
	{
		*d1 = *s1;
		d1++;s1++;

		nb--;
	}
	return (d1);
}
