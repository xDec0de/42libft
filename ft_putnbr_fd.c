/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:38:56 by danimart          #+#    #+#             */
/*   Updated: 2021/09/17 16:43:35 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print_int(long nb, int fd)
{
	if (nb >= 10)
		print_int(nb / 10, fd);
	ft_putchar_fd('0' + nb % 10, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = (long)n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		print_int(nb * -1, fd);
	}
	else
		print_int(nb, fd);
}
