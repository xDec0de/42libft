/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:37:09 by daniema3          #+#    #+#             */
/*   Updated: 2024/09/16 21:32:36 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*substr;

	if (s == NULL)
		return (NULL);
	size = ft_strlen(&s[start]);
	if (size < len)
		len = size;
	substr = (char *)ft_calloc(len + 1, sizeof(char));
	if (start >= ft_strlen(s))
		return (substr);
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && i < len)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	return (substr);
}
