/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:17:09 by danimart          #+#    #+#             */
/*   Updated: 2021/09/15 17:50:40 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t			i;
	unsigned int	cont;

	i = 0;
	cont = 0;
	while (src[cont])
		cont++;
	if (dstsize == 0)
		return (cont);
	while (src[++i] && i < (dstsize - 1))
		dest[i] = src[i];
	dest[i] = '\0';
	return (cont);
}
