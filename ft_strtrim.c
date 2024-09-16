/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:36:26 by daniema3          #+#    #+#             */
/*   Updated: 2024/09/16 21:32:15 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_contains(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
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

	if (s == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s[start] && str_contains(set, s[start]))
		start++;
	end = ft_strlen(s);
	while (end > start && str_contains(set, s[end - 1]))
		end--;
	strim = (char *) ft_calloc(end - start + 1, sizeof(char));
	if (strim == NULL)
		return (NULL);
	while (end > start)
	{
		end--;
		strim[end - start] = s[end];
	}
	return (strim);
}
