/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:29:43 by trpham            #+#    #+#             */
/*   Updated: 2024/11/02 18:11:57 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;
	unsigned char	*dest_p;
	unsigned char	*src_p;

	dest_p = (unsigned char *)dest;
	src_p = (unsigned char *)src;
	count = 0;
	if (dest == NULL && src ==NULL)
		return NULL;

		
	if (n == 0)
		return (dest_p);
	while (++count < n && src_p[count]!= '\0')
	{
		dest_p[count] = src_p[count];
	}
	// while (++count < n)
	// {
	// 	dest_p[count] = '\0';
	// }
	return (dest_p);
}

#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	dest[30] = "or longer";
	char	src[10] = "short";
	char	test_dest[20] = "or longer";
	char	test_src[10] = "short";

	printf("%s\n", memcpy(dest, src, 2));
	printf("%s\n", ft_memcpy(dest, src, 2));

	printf("%s\n", memcpy(dest, src, 6));
	printf("%s\n", ft_memcpy(dest, src, 6));

	printf("%s\n", memcpy(dest, src, 0));
	printf("%s\n", ft_memcpy(dest, src, 0));

	return (0);
}