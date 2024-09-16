/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:34:18 by daniema3          #+#    #+#             */
/*   Updated: 2024/09/16 19:34:19 by daniema3         ###   ########.fr       */
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
	{
		while (i < len && srcstr != dststr)
		{
			dststr[i] = srcstr[i];
			i++;
		}
	}
	return (dst);
}
