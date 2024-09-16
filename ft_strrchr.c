/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:36:21 by daniema3          #+#    #+#             */
/*   Updated: 2024/09/16 19:36:22 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;
	char	*str;
	char	ch;

	i = 0;
	ch = (char) c;
	str = (char *) s;
	res = NULL;
	while (str[i])
	{
		if (str[i] == ch)
			res = &str[i];
		i++;
	}
	if (str[i] == ch)
		res = &str[i];
	return (res);
}
