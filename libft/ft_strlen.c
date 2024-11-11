/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:40:20 by trpham            #+#    #+#             */
/*   Updated: 2024/11/07 12:06:57 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/* #include <stdio.h>
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
