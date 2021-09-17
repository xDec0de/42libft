/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 13:01:19 by danimart          #+#    #+#             */
/*   Updated: 2021/09/17 15:12:43 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	find_next(char const *str, char c, size_t i)
{
	while (str[i])
	{
		if (str[i] == c && str[i - 1] != c)
			return (i);
		i++;
	}
	return (0);
}

static size_t	get_split_count(char const *str, char c)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = 0;
	while (str[i])
	{
		if (str[i] == c && str[i - 1] != c)
			res++;
		i++;
	}
	return (res + 2);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	j;
	size_t	si;
	size_t	next;

	res = malloc(get_split_count(s, c));
	i = 0;
	si = 0;
	while (i <= get_split_count(s, c))
	{
		next = find_next(s, c, j);
		res[i] = malloc(next * sizeof(char));
		j = 0;
		while (j <= next)
		{
			res[i][j] = s[si];
			j++;
			si++;
		}
		i++;
	}
	return (res);
}

int	main(void)
{
	char	*str = "This;is;a;test";
	char	**res = ft_split(str, ';');

	printf("%s\n", res[0]);
	printf("%s\n", res[1]);
	printf("%s\n", res[2]);
	printf("%s\n", res[3]);
}