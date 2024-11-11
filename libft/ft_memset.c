/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:41:10 by trpham            #+#    #+#             */
/*   Updated: 2024/11/01 19:17:58 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}
/*
// size_t is the unsigned integer type of the result of sizeof
// s is a void*, which doesn't support direct indexing. 
// You need to cast s to a char* first 
// because you want to set each byte individually.
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[20] = "or longer";
	char	test_str[20] = "or longer";

	printf("%s\n", memset(str, '-', 3));
	printf("%s\n", memset(str, '-', 15));

	printf("%s\n", ft_memset(test_str, '*', 3));
	printf("%s\n", ft_memset(test_str, '*', 15));

	return (0);
}
*/
