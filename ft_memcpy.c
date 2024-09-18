/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:34:12 by daniema3          #+#    #+#             */
/*   Updated: 2024/09/18 18:48:41 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, void const *src, size_t n)
{
	size_t		i;
	char		*dst_casted;
	char		*src_casted;

	i = 0;
	if (src == NULL || dst == NULL)
		return (dst);
	dst_casted = (char *) dst;
	src_casted = (char *) src;
	while (i < n)
	{
		dst_casted[i] = src_casted[i];
		i++;
	}
	return (dst);
}
