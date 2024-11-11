/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:54:33 by trpham            #+#    #+#             */
/*   Updated: 2024/11/11 16:53:31 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/* 
Where dst is the destination buffer, 
src is the source string, 
and size is the size of the destination buffer
With the strlcpy() function, however, 
only size characters maximum are copied, 
and the value returned is the size of string src. 
(The value returned is always the size of string src 
regardless of how many characters are copied.)
 */

/* #include <string.h>
#include <stdio.h>

int	main(void)
{
	char d[20] = "Vis";
	char s[20]	= "HAKHA";

	printf("%ld\n",strlcpy(d,s,2));
	printf("%ld\n",ft_strlcpy(d,s,2));

	// printf("%zu\n",strlcpy(d,s,0));
	// printf("%zu\n",ft_strlcpy(d,s,0));
} */