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

int	ft_putnbr_hex_fd(unsigned int nbr, int fd, char b)
{
	int	count;
	char	*base;

	count = 0;
	if (b == 'x')
		base = "0123456789abcdef";
	else if (b == 'X')
		base = "0123456789ABCDEF";
	if (nbr >= 16)
		count += ft_putnbr_hex_fd(nbr / 16, fd, b);
	ft_putchar_fd(base[nbr % 16], fd);
	return (count + 1);
}

/* int	main(void)
{
	// ft_putnbr_hex_fd(-123, 1, 'x');
	// printf("\n");
	// printf("%x\n", -123);
	// printf("\n");
	int	real = printf("%x", );
	printf("\n");
	int	dup = ft_putnbr_hex_fd(-456, 1, 'x');
	printf("\n");

	printf("real = %d\n dup = %d\n", real, dup);
	
	return (0);
} */
