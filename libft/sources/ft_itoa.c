/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:38:57 by trpham            #+#    #+#             */
/*   Updated: 2024/11/09 14:49:31 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_number(int i)
{
	int	count;

	count = 0;
	if (i <= 0)
		count++;
	while (i)
	{
		i = i / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	long	nl;

	len = ft_count_number(n);
	s = malloc(len + 1);
	if (s == NULL)
		return (NULL);
	s[len] = '\0';
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		s[0] = '-';
		nl = -nl;
	}
	while (nl)
	{
		s[--len] = nl % 10 + '0';
		nl = nl / 10;
	}
	return (s);
}
/* #include <stdio.h>

int	main(void)
{
	
	printf("%s\n", ft_itoa(-123));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(1));
	printf("%s\n", ft_itoa(-123));
	printf("%s\n", ft_itoa(-4));
	printf("%s\n", ft_itoa(INT_MAX));
	printf("%s\n", ft_itoa(INT_MIN));


	return (0);
} */