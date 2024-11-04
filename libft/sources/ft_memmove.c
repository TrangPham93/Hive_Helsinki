/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:56:19 by trpham            #+#    #+#             */
/*   Updated: 2024/11/04 12:04:44 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			count;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	*m;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	count = n;
	if (d == NULL && s == NULL)
		return (NULL);
	while (count--)
	{
		*m = *s;
	}
	count = -1;
	while (count++ < n)
	{
		*d = *m;
	}

	return (d);
}

#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	dest[30] = "or longer";
	char	src[10] = "no";
	char	test_dest[20] = "or longer";
	char	test_src[10] = "no";

	printf("%s\n", memmove(dest, src, 2));
	printf("%s\n", ft_memmove(test_dest, test_src, 2));

	// printf("%s\n", memmove(dest, src, 4));
	// printf("%s\n", ft_memmove(test_dest, test_src, 4));
	

	// printf("%s\n", memmove(dest, src, 0));
	// printf("%s\n", ft_memmove(test_dest, test_src, 0));

	return (0);
}
