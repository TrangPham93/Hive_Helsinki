/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:47:45 by trpham            #+#    #+#             */
/*   Updated: 2024/11/22 12:51:04 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex_fd(unsigned long nbr, int fd, char b)
{
	int		count;
	char	*base;

	count = 0;
	if (b == 'x')
		base = "0123456789abcdef";
	else if (b == 'X')
		base = "0123456789ABCDEF";
	else
		return (-1);
	if (nbr >= 16)
		count += ft_putnbr_hex_fd(nbr / 16, fd, b);
	ft_putchar_fd(base[nbr % 16], fd);
	return (count + 1);
}
