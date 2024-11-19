/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:34:39 by trpham            #+#    #+#             */
/*   Updated: 2024/11/01 18:27:21 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(unsigned char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n", isprint('a'));
	printf("%d\n", ft_isprint('a'));
    printf("%d\n", isprint('\n'));
	printf("%d\n", ft_isprint('\n'));
    printf("%d\n", isprint(' '));
	printf("%d\n", ft_isprint(' '));
	return (0);
}*/
