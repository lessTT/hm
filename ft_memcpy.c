/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 20:35:53 by storchbu          #+#    #+#             */
/*   Updated: 2018/12/09 23:08:35 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *s1 = (char *)src;
	char *s2 = (char *)dst;

	while (n--)
	{
		*s2 = *s1;
		s1++;
		s2++;
	}
	return (dst);
}
