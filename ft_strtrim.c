/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 10:26:35 by danimart          #+#    #+#             */
/*   Updated: 2021/09/17 12:37:48 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_contains(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s, const char *set)
{
	int		start;
	int		end;
	char	*strim;

	if (!s || !set)
		return (NULL);
	start = 0;
	while (s[start] && str_contains(set, s[start]))
		start++;
	end = ft_strlen(s);
	while (end > start && str_contains(set, s[end - 1]))
		end--;
	strim = (char *) ft_calloc(end - start + 1, sizeof(char));
	if (!strim)
		return (NULL);
	while (end > start)
	{
		end--;
		strim[end - start] = s[end];
	}
	return (strim);
}
