/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:02:31 by danimart          #+#    #+#             */
/*   Updated: 2021/09/15 17:51:01 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	unsigned int	count;
	size_t			dst_len;
	size_t			src_len;

	i = 0;
	dst_len = 0;
	src_len = 0;
	while (dst[dst_len])
		dst_len++;
	while (src[src_len])
		src_len++;
	while (src[++i] && (dst_len + i) < dstsize - 1 && dstsize != 0)
		dst[dst_len + i] = src[i];
	dst[dst_len + i] = '\0';
	if (dstsize < dst_len)
		count = dstsize + src_len;
	else
		count = dst_len + src_len;
	return (count);
}
