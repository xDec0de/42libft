/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:32:30 by daniema3          #+#    #+#             */
/*   Updated: 2024/09/18 18:53:27 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	final_size;

	final_size = size * count;
	str = malloc(final_size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, final_size);
	return (str);
}
