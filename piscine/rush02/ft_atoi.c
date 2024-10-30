/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:24:48 by trpham            #+#    #+#             */
/*   Updated: 2024/09/21 14:10:00 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi.h"

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	substr;

	i = 0;
	minus = 1;
	substr = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{	
		substr = substr * 10 + (str[i] - '0');
		i++;
	}
	return (substr * minus);
}
/*
need to fix atoi function
#include <stdio.h>
int	main(int argc, char *argv[])
{
	(void)argc;
	
	int a;
	
	a=ft_atoi(argv[1]);
	printf("%d",a);
	
}
*/
