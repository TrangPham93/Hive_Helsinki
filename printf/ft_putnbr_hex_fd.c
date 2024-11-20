/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:47:45 by trpham            #+#    #+#             */
/*   Updated: 2024/11/20 13:51:27 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_hex_fd(long long nbr, int fd, char b)
{
	int	count;
	char	*base;

	count = 0;
	if (b == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
		count++;
	}
	if (nbr >= 16)
	{
		count++;
		ft_putnbr_hex_fd(nbr / 16, fd, b);
	}
	ft_putchar_fd(base[nbr % 16], fd);
	return (count);
}

int	main(void)
{
	ft_putnbr_hex_fd(-123, 1, 'x');
	printf("\n");
	printf("%x\n", -123);
	return (0);
}