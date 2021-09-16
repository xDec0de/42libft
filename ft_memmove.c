/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:19:48 by danimart          #+#    #+#             */
/*   Updated: 2021/09/15 17:50:14 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dststr;
	char	*srcstr;
	size_t	i;

	i = 0;
	dststr = (char *) dst;
	srcstr = (char *) src;
	if (dststr > srcstr)
		while (len-- > 0)
			dststr[len] = srcstr[len];
	else
		while (++i < len && srcstr != dststr)
			dststr[i] = srcstr[i];
	return (dst);
}
