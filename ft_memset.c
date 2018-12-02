/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <storchbu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 21:50:12 by storchbu          #+#    #+#             */
/*   Updated: 2018/12/02 16:46:59 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    *ft_memset(char *memptr, int val, int num) //(строка, на что, сколько)
{
    int change;

    change = 0;
    while (num - 1 >= change)
    {
        memptr[change] = val;
        change++;
    }
}
