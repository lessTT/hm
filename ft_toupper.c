/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 15:29:53 by storchbu          #+#    #+#             */
/*   Updated: 2019/01/10 15:39:45 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(int ch)
{
	if (ch >= 97 && ch <= 122)
		return (ch - 32);
	return (ch);
}


// #include <stdio.h>
// int main()
// {
//   int ix = 0;                               // индекс символов строки
//   char character, str[] = "Test String.\n";
 
//   while (str[ix])                           // пока не конец строки
//   {
//     character = str[ix];
//     printf("%c",(char)ft_toupper(character));  // преобразовать строчную букву в прописную
//     ix++;                                   // инкремент индекса символов строки
//   }
//   return 0;
// }