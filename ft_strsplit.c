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

static void		freearr(char **words, int i)
{
	while (i--)
		ft_strdel(&words[i]);free(words);
}

static int		ft_words(char const *s, char c)
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
	return (n);
}

static size_t	ft_word_len(char *arr, char c)
{
	size_t n;

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

char		**ft_strsplit(char const *s, char c)
{
	int a;
	int b;
	int n;
	char **new_s;

	a = 0;
	n = 0;
	if (!s)
		return (NULL);
	if (!(new_s = (char**)malloc(ft_words((char*)s, c) * sizeof(*new_s) + 1)))
		return (NULL);
	while(a < ft_words(s, c))
	{
		b = 0;
		if (!(new_s[a] = ft_strnew(ft_word_len((char*)&s[n], c))))
			freearr(new_s, a);
		while (s[n] == c)
			n++;
		while (s[n] != c && s[n])
			new_s[a][b++] = s[n++];
		a++;
	}
	new_s[a] = NULL;
	return (new_s);
}
