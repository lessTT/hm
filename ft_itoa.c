/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 22:01:53 by storchbu          #+#    #+#             */
/*   Updated: 2019/02/18 23:59:02 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int i;

	i = 0;
	if (n >= 0)
	{
		while (n >= 10)
		{
			n /= 10;
			i++;
		}
		return (i + 1);
	}
	else
	{
		while (n <= -10)
		{
			n /= 10;
			i++;
		}
		return (i + 2);
	}
}

char		*ft_itoa(int n)
{
	int		i;
	char	*s;

	i = num_len(n);
	if (n == 0)
		return (ft_strcpy(ft_strnew(1), "0"));
	if (n == -2147483648)
		return (ft_strcpy(ft_strnew(11), "-2147483648"));
	if ((s = ft_strnew(i)) == NULL)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		s[0] = '-';
	}
	while (n)
	{
		s[--i] = ((n % 10) + '0');
		n /= 10;
	}
	return (s);
}
