/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:28:09 by trpham            #+#    #+#             */
/*   Updated: 2024/11/07 09:56:33 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int			i;
	long long	result;
	int			sign;

	i = 0;
	result = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	if (result * sign > INT_MAX)
		return (-1);
	else if (result * sign < INT_MIN)
		return (0);
	return (result * sign);
}

/* #include <stdio.h>
#include <stdlib.h>

int	main()
{

	printf("%d\n", atoi("  -123"));
	printf("%d\n", ft_atoi("  -123"));
	printf("\n");

	printf("%d\n", atoi("+123"));
	printf("%d\n", ft_atoi("+123"));
	printf("\n");

	printf("%d\n", atoi("   +56"));
	printf("%d\n", ft_atoi("   +56"));
	printf("\n");

	printf("%d\n", atoi("  a +56"));
	printf("%d\n", ft_atoi("  a +56"));
	printf("\n");

	printf("%d\n", atoi("   -5 6anb"));
	printf("%d\n", ft_atoi("   -5 6anb"));
	printf("\n");

	printf("%d\n", atoi("188888888888888888888888888888888"));
	printf("%d\n", ft_atoi("188888888888888888888888888888888"));
	printf("\n");

	printf("%d\n", atoi("-188888888888888888888888888888888"));
	printf("%d\n", ft_atoi("-188888888888888888888888888888888"));
	printf("\n");
	
} */