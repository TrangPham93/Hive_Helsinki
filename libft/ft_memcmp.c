/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:17:39 by trpham            #+#    #+#             */
/*   Updated: 2024/11/05 21:41:24 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (*str1 != *str2)
			return ((unsigned char)*str1 - (unsigned char)*str2);
		str1++;
		str2++;
	}
	return (0);
}
/* #include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s1 = "howb\n";
	char	*s2 = "howare";
	
	
	printf("%d\n", memcmp(s1, s2, 3));
	printf("%d\n", ft_memcmp(s1, s2, 3));
	printf("\n");
	printf("%d\n", memcmp(s1, s2, 5));
	printf("%d\n", ft_memcmp(s1, s2, 5));
	printf("\n");
	printf("%d\n", memcmp(s1, s2, 6));
	printf("%d\n", ft_memcmp(s1, s2, 6));
	// printf("\n");
	// printf("%d\n", memcmp(s1, s2, 8));
	// printf("%d\n", ft_memcmp(s1, s2, 8));
	printf("\n");
	printf("%d\n", memcmp(s1, s2, 0));
	printf("%d\n", ft_memcmp(s1, s2, 0));
	printf("\n");
	char	*s3 = "how ";
	char	*s4 = "howare";
	printf("%d\n", memcmp(s3, s4, 4));
	printf("%d\n", ft_memcmp(s3, s4, 4));

	return (0);
}  */