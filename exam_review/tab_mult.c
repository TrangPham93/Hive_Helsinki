/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:24:58 by trpham            #+#    #+#             */
/*   Updated: 2025/02/17 16:40:44 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *s)
{
	int nb;
	int sign = 1;

	nb = 0;
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s && *s >='0' && *s <= '9')
	{
		nb = nb * 10 + (*s - '0');
		s++;
	}
	return (nb * sign);
}
#include <stdio.h>

void put_nbr(int nb)
{
	char c;
	
	if (nb > 9)
		put_nbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int nb;
	int i;
	
	if (ac == 1)
		write(1, "\n", 1);
	else
	{
		nb = ft_atoi(av[1]);
		if (nb <= 0)
		{
			write(1, "\n", 1);
			return (0);
		}
		i = 1;
		while (i <= 9)
		{
			put_nbr(i);
			write(1, " x ", 3);
			put_nbr(nb);
			write(1, " = ", 3);
			put_nbr(nb * i);
			write(1, "\n", 1);
			i++;
		}
		// printf("%d\n", nb);
		
	}
}