/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:16:15 by trpham            #+#    #+#             */
/*   Updated: 2025/02/11 14:16:06 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_count(char *str)
{
	int count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (*str >= 65 && *str <= 90)
			count += 1;
		i++;
	}
	return (count + i);
}
void ft_putstr(char	*str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
}

int	main(int ac, char **av)
{
	int i;
	int j;
	char *new_str;

	if (ac == 2)
	{
		i = 0;
		j = 0;
		new_str = malloc(sizeof(char) * (ft_count(av[1]) + 1));
		while (av[1][i])
		{
			if (av[1][i] >= 65 && av[1][i] <= 90)
			{
				new_str[j++] = 95; 
				new_str[j] = av[1][i] + 32;
			}
			else
				new_str[j] = av[1][i];
			i++;
			j++;
		}
		new_str[j] ='\0';
		ft_putstr(new_str);
	}
	write(1, "\n", 1);
}
