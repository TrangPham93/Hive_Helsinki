/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:17:31 by trpham            #+#    #+#             */
/*   Updated: 2025/02/17 15:52:38 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *s)
{
	int nb;

	nb = 0;
	while (*s)
	{
		nb = nb * 10 + (*s - '0');
		s++;
	}
	return (nb);
}
void ft_puthex(int nb)
{
	int c;
	char *base = "0123456789abcdef";
	
	if (nb > 15)
		ft_puthex(nb / 16);
	c = nb % 16;
	write(1, &base[c], 1);
}
#include <stdio.h>

int main(int ac, char **av)
{
	int nb;
	
	if (ac == 2)
	{
		nb = ft_atoi(av[1]);
		ft_puthex(nb);
	}
	write(1, "\n", 1);
}