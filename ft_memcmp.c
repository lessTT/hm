/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <storchbu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:50:37 by storchbu          #+#    #+#             */
/*   Updated: 2018/12/02 17:23:17 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_memcmp(char *str1, char *str2, int n)
{
	int res;

	res = 0;
	while (*str1 || *str2)
	{
		if (*str1 > *str2)
			res++;
		else if (*str1 < *str2)
			res--;
		str1++;
		str2++;
	}
	return (res);
}

int main(void)
{
	char str1[15] = "abcdef";
	char str2[15] = "abcdef";
   	int ret;

   ret = ft_memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}