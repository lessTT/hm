/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 18:35:37 by storchbu          #+#    #+#             */
/*   Updated: 2018/12/23 21:02:28 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		srly(const char *wtf)
{
	if (*wtf == '\n' || *wtf == '\f' || *wtf == '\t' || *wtf == '\r' \
		|| *wtf == '\v' || *wtf == ' ' || *wtf == '+')
		return (1);
	else
		return (0);
}

int		ft_strsize(const char *str)
{
	int res;

	res = 0;
	while (*str++)
		res++;
	return (res);
}

int		have_word(const char *str)
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

int		vse_norm(const char *str)
{
	int slova;

	slova = 0;
	if (ft_strsize(str) > 18)
	{
		if (have_word(str))
			slova = 1;
		if (slova == 0 && *str != '-')
			return (-1);
		if (*str == '-' && slova == 0)
			return (0);
	}
	return (1);
}

int		ft_atoi(const char *str)
{
	int res;
	int minus;

	res = 0;
	minus = 1;
	while (srly(str))
		str++;
	if (vse_norm(str))
	if (*str == '-')
	{
		str++;
		minus = -1;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * minus);
}

int		main()
{
	char	str[200] = "22222222222222222222";
	int		val = atoi(str);
	printf("String value = %s, real atoi = %d\n", str, val);

	int		val1 = ft_atoi(str);
	printf("String value = %s,  my  atoi = %d\n", str, val1);

	int n = 0;
	while (str[n++]);
	printf("%d\n", n-1);
	printf("%d\n", ft_strsize(str));

	return 0;
}
