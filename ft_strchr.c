/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:17:04 by danimart          #+#    #+#             */
/*   Updated: 2021/09/15 17:54:20 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	ch;

	i = 0;
	ch = (char) c;
	str = (char *) s;
	while (str[++i])
		if (str[i] == ch)
			return (&str[i]);
	if (str[i] == ch)
		return (&str[i]);
	return (NULL);
}
