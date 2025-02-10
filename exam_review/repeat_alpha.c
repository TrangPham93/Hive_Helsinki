/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 08:40:27 by trpham            #+#    #+#             */
/*   Updated: 2025/02/10 15:29:05 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat(char	c, int 	i)
{
	while (i > 0)
	{
		write(1, &c, 1);
		i--;
	}
}

int	main(int argc, char	*argv[])
{
	int	i;
	int	j;
	char	*lowercase;
	char	*uppercase;

	if (argc == 2)
	{
		lowercase = "abcdefghijklmnopqrstuvwxyz";
		uppercase = "ABCDEFGHIJKLMNOPQRSTUVWZYZ";
		j = 0;
		while (argv[1][j])
		{
			i = 0;
			while (i < 26 && argv[1][j] != lowercase[i] && argv[1][j] != uppercase[i])
				i++;
			if (i < 26)
				repeat(argv[1][j], i + 1);
			else
				write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
