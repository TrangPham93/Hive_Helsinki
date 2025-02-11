/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:46:42 by trpham            #+#    #+#             */
/*   Updated: 2025/02/11 11:40:27 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char	*s)
{
	int	count;
	
	count = 0;
	while (*s)
	{
		count++;
		s++;
	}
	return (count);

}
void ft_putstr(char	*str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
	// write(1, "\n", 1);
}
int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 4)
	{
		if (ft_strlen(av[2]) > 1 || ft_strlen(av[3]) > 1)
		{
			write(1, "\n", 1);
			exit (-1);
		}
		while (av[1][i])
		{
			if (av[1][i] == av[2][0])
				av[1][i] = av[3][0];
			i++;
		}		
		ft_putstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
