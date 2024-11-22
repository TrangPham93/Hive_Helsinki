/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:50:17 by trpham            #+#    #+#             */
/*   Updated: 2024/11/22 12:51:23 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_fd(void *ptr, int fd)
{
	int			count;
	uintptr_t	u_ptr;

	u_ptr = (uintptr_t)ptr;
	if (!u_ptr)
		count = ft_putstr_fd("(nil)", fd);
	else
	{
		count = ft_putstr_fd("0x", fd);
		count += ft_putnbr_hex_fd(u_ptr, fd, 'x');
	}
	return (count);
}
