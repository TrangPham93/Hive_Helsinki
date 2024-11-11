/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:54:33 by trpham            #+#    #+#             */
/*   Updated: 2024/11/05 16:25:59 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
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

	printf("%d\n",strlcpy(d,s,2));
	printf("%d\n",ft_strlcpy(d,s,2));

	printf("%zu\n",strlcpy(d,s,3));
	printf("%zu\n",ft_strlcpy(d,s,3));
}
 */