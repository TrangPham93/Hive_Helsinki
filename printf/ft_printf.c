/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:42:12 by trpham            #+#    #+#             */
/*   Updated: 2024/11/19 14:59:35 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char	*str, ...)
{
	va_list	args;

	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_process(*str, args);
		}
		str++;
	}
	va_end(args);

	return (0);
}

static void ft_process(char str, va_list args)
{
	// unsigned char	i;
	void	*next_arg;

	if (str == 'c')
	{
		next_arg = va_arg(args, char);
		ft_putchar_fd(next_arg, 1);
	}
	// else if (str == 's')
	// {
	// 	next_arg = va_arg(args, char*);
	// 	ft_putstr_fd(next_arg, 1);
	// }
	// else if (str == 'd')
	// {
	// 	next_arg = va_arg(args, int);
	// 	ft_putnbr_fd(next_arg, 11);
	// }
	// else if (str == 'p')
	// {

	// }
	// else if (str == 'i')
	// {

	// }
	// else if (str == 'u')
	// {

	// }
	// else if (str == '%')
	
	else
		ft_putchar_fd('%', 1);
}