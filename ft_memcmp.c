/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <storchbu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:50:37 by storchbu          #+#    #+#             */
/*   Updated: 2018/12/02 19:08:20 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_memcmp(const void *one, const char *two, size_t n)
{
	int res;

	res = 0;
	while (*one || *two)
	{
		if (*one > *two)
			res++;
		else if (*one < *two)
			res--;
		one++;
		two++;
	}
	return (res);
}
