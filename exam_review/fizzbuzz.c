/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:11:00 by trpham            #+#    #+#             */
/*   Updated: 2025/02/10 08:06:45 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int i)
{
	if (i > 9)
		putnbr(i / 10);	
	write(1, &"0123456789"[i % 10], 1);
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 != 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0 && i % 3 != 0)
			write(1, "buzz\n", 5);
		else if (i % 5 == 0 && i % 3 == 0)
			write(1, "fizzbuzz\n", 9);
		else
		{
			putnbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
	return (0);
}
