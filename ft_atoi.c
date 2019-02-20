/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 18:35:37 by storchbu          #+#    #+#             */
/*   Updated: 2019/01/29 13:47:26 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		srly(const char *wtf)
{
	if (*wtf == '\n' || *wtf == '\f' || *wtf == '\t' || *wtf == '\r' \
		|| *wtf == '\v' || *wtf == ' ' || *wtf == '+')
		return (1);
	else
		return (0);
}

static int		ft_strsize(const char *str)
{
	int res;

	res = 0;
	while (*str++)
		res++;
	return (res);
}

static int		have_word(const char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' || str[i] >= 'A') && \
		(str[i] <= 'z' || str[i] <= 'Z'))
			return (1);
		i++;
	}
	return (0);
}

int		ft_atoi(const char *str)
{
	long int	res;
	int			minus;

	res = 0;
	minus = 1;
	while (srly(str))
		str++;
	if (!(ft_strcmp(str, "-2147483648")))
		return (-2147483648);
	if (ft_strsize(str) > 10 && !have_word(str))
		return (*str == '-' ? 0 : -1);
	if (*str == '-')
	{
		minus = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return ((int)res * minus);
}
