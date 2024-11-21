/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:07:11 by trpham            #+#    #+#             */
/*   Updated: 2024/11/20 10:21:05 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	int	count;

	// if (!n) // is this correct ?
	// {
	// 	count = ft_putstr_fd("(null)", 1);
	// 	return (count);
	// }
	count = 0;
	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
		count++;
	}
	if (nb >= 10)
		count += ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(nb % 10 + '0', fd);
	return (count + 1);
}
