/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:25:07 by trpham            #+#    #+#             */
/*   Updated: 2024/11/07 10:02:57 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(unsigned char c)
{
	if ((c && c <= 127))
		return (1);
	else
		return (0);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n", isascii('\n'));
    printf("%d\n", isascii('√')); // non-ascii
	printf("%d\n", ft_isascii('\n'));
	printf("%d\n", ft_isascii('√')); // non-ascii
    return (0);
}*/
