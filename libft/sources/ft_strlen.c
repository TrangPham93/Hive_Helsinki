/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:40:20 by trpham            #+#    #+#             */
/*   Updated: 2024/11/01 18:27:18 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++ != '\0')
	{
		count++;
	}
	return (count);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%d\n", ft_strlen("visao laithe"));
	printf("%d\n", strlen("Visao laithe"));

	printf("%d\n", ft_strlen(""));
	printf("%d\n", strlen(""));

	printf("%d\n", ft_strlen("1"));
	printf("%d\n", strlen("1"));
	return (0);
}
*/
