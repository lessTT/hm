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

//#include <libft.h>
//
//int        ft_atoi(const char *str)
//{
//    int        i;
//    int        num;
//    int        sign;
//
//    i = 0;
//    num = 0;
//    sign = 1;
//    while (*(str + i) == '\n' ||
//           *(str + i) == '\t' ||
//           *(str + i) == '\r' ||
//           *(str + i) == '\v' ||
//           *(str + i) == '\f' ||
//           *(str + i) == ' ')
//        i++;
//    if (*(str + i) == '-')
//        sign = -1;
//    if (*(str + i) == '-' || *(str + i) == '+')
//        i++;
//    while (*(str + i) && *(str + i) >= '0' && *(str + i) <= '9')
//        num = num * 10 + (*(str + i++) - '0');
//    return (num * sign);
//}


//надо пофиксить на максимальную длинну int (-2147483648;2147483647)
 
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

// int		max_int(const char *str)
// {
// 	if (str == "2147483647")

// }

int		atoi(const char *str)
{
	int res;
	int minus;

	res = 0;
	minus = 1;
	while (srly(str))
		str++;
	// if (ft_strsize(str) > 10 && !have_word(str) && max_int(str))
	{
		if (*str == '-')
			return (0);
		else
			return (-1);
	}
	if (*str == '-')
	{
		minus = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * minus);
}
