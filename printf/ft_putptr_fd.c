/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:50:17 by trpham            #+#    #+#             */
/*   Updated: 2024/11/22 11:21:05 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_fd(uintptr_t ptr, int fd)
{
	int	count;

	if (!ptr)
		count = ft_putstr_fd("(nil)", fd);
	else
	{
		count = ft_putstr_fd("0x", fd);
		count += ft_putnbr_hex_fd(ptr, fd, 'x');
	}
	return (count);
}
