/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:34:41 by daniema3          #+#    #+#             */
/*   Updated: 2024/09/16 19:34:41 by daniema3         ###   ########.fr       */
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
