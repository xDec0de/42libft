/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:54:14 by danimart          #+#    #+#             */
/*   Updated: 2021/09/15 17:54:37 by danimart         ###   ########.fr       */
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
	while (str[++i])
		if (str[i] == ch)
			res = &str[i];
	if (str[i] == ch)
		res = &str[i];
	return (res);
}
