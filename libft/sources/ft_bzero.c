/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:28:42 by trpham            #+#    #+#             */
/*   Updated: 2024/11/02 16:29:56 by trpham           ###   ########.fr       */
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

void	ft_bzero(void	*s, size_t n)
{
	ft_memset(s, '\0', n);
}
// #include <strings.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	str[20] = "or longer";
// 	char	test_str[20] = "or longer";

// 	bzero(str, 3);
// 	printf("%s\n", str + 3);
// 	bzero(str, 4);
// 	printf("%s\n", str + 4);
// 	The characters after the first three null bytes are still in memory, 
// 	but they're not printed because printf 
//stops at the first null terminator it encounters.
// 	ft_bzero(test_str, 3);
// 	printf("%s\n", test_str + 3);
// 	ft_bzero(test_str, 4);
// 	printf("%s\n", test_str + 4);
// 	return (0);
// }
