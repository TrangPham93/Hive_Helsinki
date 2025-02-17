/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:54:55 by trpham            #+#    #+#             */
/*   Updated: 2025/02/17 16:18:11 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char to_upper(char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);		
}

char to_lower(char c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);		
}
int main(int ac, char **av)
{
	int i = 1;
	int j;
	if (ac > 1)
	{
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				if (av[i][j + 1] == '\0' || av[i][j + 1] == ' ' || av[i][j + 1] == '\t')
					av[i][j] = to_upper(av[i][j]);
				else
					av[i][j] = to_lower(av[i][j]);
				write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;	
		}
	}
	else
		write(1, "\n", 1);
}