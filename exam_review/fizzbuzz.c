/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:11:00 by trpham            #+#    #+#             */
/*   Updated: 2025/02/07 11:26:55 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	multiple_of_three(int nb)
{
	if (nb % 3 == 0)
		return (0);
	return (-1);
}

int	multiple_of_five(int nb)
{
	if (nb % 5 == 0)
		return (0);
	return (-1);
}
char	itoa(int nb)
{
	return (nb + '0');
}

int	main(void)
{
	int	i;

	i = 0;
	while (i++ < 100)
	{
		if (multiple_of_three(i) == 0 && multiple_of_five(i) != 0)
			write(1, "fizz\n", 5);
		else if (multiple_of_five(i) == 0 && multiple_of_three(i) != 0)
			write(1, "buzz\n", 5);
		else if (multiple_of_five(i) == 0 && multiple_of_three(i) != 0)
			write(1, "fizzbuzz\n", 9);
		else
		{
			if (i < 10)
				write(1, &(i + '0'), 1);
			else if (i < 100)
				write(1, itoa(i), 2);
			else
				write(1, itoa(i), 3);
			write(1, "\n", 1);
		}
	}
	return (0);
}
