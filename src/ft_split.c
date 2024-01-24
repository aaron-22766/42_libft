/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:02:31 by arabenst          #+#    #+#             */
/*   Updated: 2022/10/28 14:44:05 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	count;

	if (!s[0])
		return (0);
	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		count++;
	}
	return (count - (s[i - 1] == c));
}

static	int	ft_wordstart(char const *s, char c, int w)
{
	int	i;

	i = 0;
	while (s[i] == c)
		i++;
	while (w)
	{
		while (s[i] != c)
			i++;
		while (s[i] == c)
			i++;
		w--;
	}
	return (i);
}

static	int	ft_wordlen(char const *s, char c, int w)
{
	int	i;
	int	a;

	i = ft_wordstart(s, c, w);
	a = i;
	while (s[i] && s[i] != c)
		i++;
	return (i - a);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		wordcount;
	char	**arr;

	if (!s)
		return (NULL);
	wordcount = ft_wordcount(s, c);
	arr = malloc(sizeof(char *) * (wordcount + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < wordcount)
	{
		arr[i] = ft_substr(s, ft_wordstart(s, c, i), ft_wordlen(s, c, i));
		if (!arr[i])
			return (NULL);
		i++;
	}
	arr[i] = 0;
	return (arr);
}
