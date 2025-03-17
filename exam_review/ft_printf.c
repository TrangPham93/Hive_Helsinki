/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:08:32 by trpham            #+#    #+#             */
/*   Updated: 2025/03/17 18:17:57 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

int	is_allowed_type(char c)
{
	char *s;
	
	s = "sdx%";
	while (*s)
	{
		if (*s == c)
			return (0);
		s++;
	}
	return (-1);
}

int	put_char(char c, int fd)
{
	return (write(fd, &c, 1));
}

int	put_str(char *s, int fd)
{
	int	count = 0;

	if (s == NULL)
		return (put_str("(null)", fd));
	while (*s)
	{
		if (put_char(*s, fd) == -1)
			return (-1);
		count++;
		s++;
	}
	return (count);
}

int	put_number(int nb, int fd)
{
	int		count = 0;
	long	nbr;
	int		total_count = 0;

	nbr = nb;
	if (nbr < 0)
	{
		count = put_char('-', fd);
		if (count == -1)
			return (-1);
		total_count += count;
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		count = put_number(nbr / 10, fd);
		if (count == -1)
			return (-1);
		total_count += count;
	}
	count = put_char(nbr % 10 + '0', fd);
	if (count == -1)
		return (-1);
	total_count += count;
	return (total_count);
}

int	put_hex(unsigned int hex, int fd)
{
	int	count = 0;
	int total_count = 0;
	char *base = "0123456789abcdef";

	if (hex >= 16)
	{
		count = put_hex(hex / 16, fd);
		if (count == -1)
			return (-1);
		total_count += count;	
	}
	count = put_char(base[hex % 16], fd);
	if (count == -1)
		return (-1);
	total_count += count;
	return (total_count);
}

int	print_byte(va_list args, char c)
{
	int	count = 0;
	
	if (c == 's')
		count = put_str(va_arg(args, char *), 1);
	else if (c == 'd')
		count = put_number(va_arg(args, int), 1);
	else if (c == 'x')
		count = put_hex(va_arg(args, unsigned int), 1);
	else if (c == '%')
		count = put_char('%', 1);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list args;
	int		i = 0;
	int		count = 0;
	int		printed = 0;

	if (!str)
		return (-1);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && is_allowed_type(str[i + 1]) == 0)
		{
			printed = print_byte(args, str[i + 1]);
			i += 2;
		}
		else if (str[i] == '%' && str[i + 1] == '\0')
		{
			va_end(args);
			return (-1);
		}
		else
		{
			printed= put_char(str[i], 1);
			i++;
		}
		if (printed == -1)
		{
			va_end(args);
			return (-1);
		}
		count += printed;
	}
	va_end(args);
	return (count);
}

#include <stdio.h>
#include <limits.h>

int main(void)
{
	int a = printf("ORIGINAL : %s\n", "");
	int b = ft_printf("DUPLICAT : %s\n", "");	
	// int a = 1;
	printf("compare printed byte ORI: %d vs DUP %d \n", a, b);
	
	int c = printf("ORIGINAL : %d\n", INT_MIN);
	int d = ft_printf("DUPLICAT : %d\n", INT_MIN);	
	printf("compare printed byte ORI: %d vs DUP %d \n", c, d);

	int e = printf("ORIGINAL : %x\n", -1);
	int f = ft_printf("DUPLICAT : %x\n", -1);	
	printf("compare printed byte ORI: %d vs DUP %d \n", e, f);
	printf("Magic %s is %d%%\n", "number", 42);
	ft_printf("Magic %s is %d%%\n", "number", 42);
	
	ft_printf("%s\n", "toto");
	ft_printf("Hexadecimal for %d is %x\n", 42, 42);
	return (0);
}