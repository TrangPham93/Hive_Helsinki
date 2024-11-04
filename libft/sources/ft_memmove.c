/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:56:19 by trpham            #+#    #+#             */
/*   Updated: 2024/11/04 16:53:25 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				count;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	count = 0;
	if (d < s)
	{
		while (count < n)
		{
			d[count] = s[count];
			count++;
		}
	}
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (d);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	dest[30] = "";
	char	src[10] = "";
	char	test_dest[20] = "";
	char	test_src[10] = "";

	printf("%s\n", memmove(dest, src, 2));
	printf("%s\n", ft_memmove(test_dest, test_src, 2));

	// printf("%s\n", memmove(dest, src, 4));
	// printf("%s\n", ft_memmove(test_dest, test_src, 4));
	

	// printf("%s\n", memmove(dest, src, 0));
	// printf("%s\n", ft_memmove(test_dest, test_src, 0));

	// printf("%s\n", memmove(src+ 2, src, 4));
	// printf("%s\n", ft_memmove(test_src + 2, test_src, 4));

	int src_int[] = {1, 2, 3, 4, 5};
	int dest_int[5];
	ft_memmove(dest_int, src_int, sizeof(src_int);
	memmove(dest_int, src_int, sizeof(src_int)));
	return (0);
}
*/
