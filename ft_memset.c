/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <storchbu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 21:50:12 by storchbu          #+#    #+#             */
/*   Updated: 2018/12/02 19:01:54 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ------------> DONE! <------------

void    *ft_memset(void *a, int val, size_t num) //(строка, на что, сколько)
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
