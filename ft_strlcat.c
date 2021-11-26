/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:02:31 by danimart          #+#    #+#             */
/*   Updated: 2021/09/21 13:55:57 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	count;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	while (src[i] && (dest_len + i) < dstsize - 1 && dstsize != 0)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	if (i != 0)
		dst[dest_len + i] = '\0';
	if (dstsize < dest_len)
		count = dstsize + src_len;
	else
		count = dest_len + src_len;
	return (count);
}
