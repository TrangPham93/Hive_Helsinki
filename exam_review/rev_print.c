/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:30:44 by trpham            #+#    #+#             */
/*   Updated: 2025/02/10 16:01:05 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char	*str)
{
	int i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char *av[])
{
	int	i;
	
	if (ac == 2)
	{
		i = ft_strlen(av[1]);
		while (i--)
			write(1, &av[1][i], 1);
	}
	write(1, "\n", 1);
	return (0);
}
