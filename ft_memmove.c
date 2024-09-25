/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:34:18 by daniema3          #+#    #+#             */
/*   Updated: 2024/09/25 18:34:56 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_move(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && src != dst)
	{
		dst[i] = src[i];
		i++;
	}
}

static void	ft_move_reverse(char *dst, const char *src, size_t len)
{
	while (len > 0)
	{
		len--;
		dst[len] = src[len];
	}
}

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (dest > src)
		ft_move_reverse(dest, src, len);
	else
		ft_move(dest, src, len);
	return (dest);
}
