/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:29:43 by trpham            #+#    #+#             */
/*   Updated: 2024/11/04 16:50:31 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			count;
	unsigned char	*dest_p;
	unsigned char	*src_p;

	dest_p = (unsigned char *)dest;
	src_p = (unsigned char *)src;
	count = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (count < n)
	{
		dest_p[count] = src_p[count];
		count++;
	}
	return (dest_p);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	dest[20] = "or longer";
	char	src[20] = "noliin";
	char	test_dest[20] = "or longer";
	char	test_src[20] = "noliin";

	printf("%s\n", memcpy(src + 2, src, 7));
	printf("%s\n", ft_memcpy(test_src + 2, test_src, 7));
	// This overlapping causes undefined behavior because:
    // You're modifying the source data as you're reading from it.
    // You're writing beyond the end of the originally allocated memory.

	
	// printf("%s\n", memcpy(dest, src, 2));
	// printf("%s\n", ft_memcpy(test_dest, test_src, 2));

	// printf("%s\n", memcpy(dest, src, 4));
	// printf("%s\n", ft_memcpy(test_dest, test_src, 4));
	// 	// printf doesn't print after first encounter with null

	// printf("%s\n", memcpy(dest, src, 0));
	// printf("%s\n", ft_memcpy(test_dest, test_src, 0));

	

	return (0);
}
*/
