/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 22:27:01 by storchbu          #+#    #+#             */
/*   Updated: 2019/02/19 13:22:08 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words(char *s, char c)
{
    int n;
    n = 0;
    
    while (*s)
    {
        while (*s == c)
            s++;
        if (!*s)
            return (n);
        n++;
        while (*s != c && *s)
            s++;
    }
    return (n + 1);
}

static int	ft_word_len(char *arr, char c)
{
    int n;
    
    n = 0;
    while(*arr == c)
        arr++;
    while(*arr != c)
    {
        arr++;
        n++;
    }
    return(n);
}

char		**ft_strsplit(char const *s, char c){
    int a;
    int b;

	a = 0;
	b = 0;
    char **new_s = (char**)malloc(ft_words((char*)s, c) * sizeof(char));
	if (new_s == NULL)
		return (NULL);
    while(*s)
    {
        while (*s == c && *s)
            s++;
        new_s[a] = ft_strnew(ft_word_len((char*)s, c));
        while (*s != c && *s)
            new_s[a][b++] = *s++;
        a++;
        b = 0;
    }
    return (new_s);
}

int main()
{
    char *s = "      split       this for   me  !       ";

    char **result = ft_strsplit(s, ' ');

    ft_putstr(*result);
    return (0);
}
