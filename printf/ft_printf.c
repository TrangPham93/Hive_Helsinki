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

static int ft_process(char c, va_list args);

int	ft_printf(const char	*str, ...)
{
	va_list	args;
	int	i;
	int	count;

	if (!str)
		return (-1);
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c' || str[i] == 's' ||  str[i] == 'p' || str[i] == 'd' || str[i] == 'i'
				|| str[i] == 'u' || str[i] == 'x' || str[i] == 'X' || str[i] == '%')
			{
				count = ft_process(str[i], args);
			}
			else
				return (-1);
		}
		i++;
	}
	va_end(args);
	return (count);
}

static int ft_process(char c, va_list args)
{
	int	count;

	if (c == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		count = 1;
	}
	else if (c == 's')
		count = ft_putstr_fd(va_arg(args, char*), 1);
	else if (c == 'd')
		count = ft_putnbr_fd(va_arg(args, int), 1);
	// else if (c == 'p')
	// {

	// }
	// else if (c == 'i')
	// {

	// }
	// else if (c == 'u')
	// {

	// }
	// else if (c == 'x' || c == 'X')
	
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		count = 1;
	}
	return (count);
}

int	main(void)
{
	printf("--> PRINT CHAR: \n");
	printf("%c\n", 'a');
	ft_printf("%c", 'a');
	printf("\n");

	printf("--> PRINT CHAR: \n");
	printf("%s\n", "Why's that");
	ft_printf("%s\n", "Why's that");
	printf("\n");

	printf("--> PRINT INT: \n");
	printf("total is %d %%\n", 23);
	ft_printf("total is %d %%\n", 23); // need to print 'total is ??'
	printf("\n");

	return (0);
}