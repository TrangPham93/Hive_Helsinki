/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:42:12 by trpham            #+#    #+#             */
/*   Updated: 2024/11/19 17:06:25 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void ft_process(char c, va_list args);

int	ft_printf(const char	*str, ...)
{
	va_list	args;
	unsigned char	i;
	// unsigned char	count;
	// char	c;

	if (!str)
		return (-1);
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_process(str[i], args);
		}
		i++;
	}
	va_end(args);
	return (0);
}

static void ft_process(char c, va_list args)
{
	// unsigned char	i;
	// void	*next_arg;
	void	*next_arg;

	if (c == 'c')
	{
		c = va_arg(args, int);
		ft_putchar_fd(c, 1);
	}
	else if (c == 's')
	{
		c = va_arg(args, char*);
		ft_putstr_fd(c, 1);
	}
	// else if (c == 's')
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

int	main(void)
{
	printf("%c\n", 'a');
	ft_printf("%c", 'a');
	
	// ft_printf(c, ...);



}