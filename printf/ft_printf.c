/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:42:12 by trpham            #+#    #+#             */
/*   Updated: 2024/11/19 13:54:55 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char	*str, ...)
{
	va_list	args;
	char	*next_arg;
	unsigned char	i;

	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			next_arg = va_arg(args, char);
			ft_process(next_arg);
		}
		str++;
		
	}
	va_end(args);
	
	
	return (0);
}

static void ft_process(va_list	args)
{
	unsigned char	i;
	if (args[i] == 'c')
	{
		
	}
	
}