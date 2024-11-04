/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:54:33 by trpham            #+#    #+#             */
/*   Updated: 2024/11/04 19:30:43 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++ != '\0')
	{
		count++;
	}
	return (count);
}

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t	len;
	char	*s;

	i = 0;
	s = (const char)src;
	len = ft_strlen(s);
	if (size == 0)
		return (len);
	else
	{
		while (len < size - 1)
		{
			dst[len] = src[len];
			len++;
		}
		dst[len] = '\0';
	}
	return (len);
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
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char d[20] = "Visao";
	char s[20]	= "HAO";

	// printf("%d\n",strlcpy(d,s,2));
	// printf("%d\n",ft_strlcpy(d,s,2));

	printf("%zu\n",strlcpy(d,s,5));
	printf("%zu\n",ft_strlcpy(d,s,5));
	//ft_strlcpy
}