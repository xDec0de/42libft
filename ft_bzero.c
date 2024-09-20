/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:32:22 by daniema3          #+#    #+#             */
/*   Updated: 2024/09/18 21:18:20 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*str, size_t n)
{
	size_t			i;
	unsigned char	*casted_str;

	i = 0;
	casted_str = str;
	while (i < n)
	{
		casted_str[i] = '\0';
		i++;
	}
}
