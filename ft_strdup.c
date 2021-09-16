/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 20:56:58 by danimart          #+#    #+#             */
/*   Updated: 2021/09/15 17:44:59 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	len;
	char			*str;

	len = 0;
	while (s[len])
		len++;
	str = malloc(len + 1);
	if (str == 0)
		return (NULL);
	len = 0;
	while (s[len])
		str[len] = s[len++];
	str[len] = '\0';
	return (str);
}
