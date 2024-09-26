/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 08:45:12 by trpham            #+#    #+#             */
/*   Updated: 2024/09/21 17:11:45 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_putnbr(int nb)
{
	long	nbl;
	char	*str;
	long	len;
	long	temp;

	nbl = nb;
	len = 0;
	temp = nbl;
	while (temp > 0)
	{
		len++;
		temp = temp / 10;
	}
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (--len >= 0)
	{
		str[len] = nbl % 10 + '0';
		nbl = nbl / 10;
	}
	return (str);
}
/*
int	main(void)
{
	printf("%s", ft_putnbr(25));
	return (0);
}
*/
