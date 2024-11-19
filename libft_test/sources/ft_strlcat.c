/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:26:44 by trpham            #+#    #+#             */
/*   Updated: 2024/11/05 18:02:26 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_s;
	size_t	i;
	size_t	src_s;

	i = 0;
	src_s = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	dst_s = i;
	if (size > dst_s)
	{
		while (size - i > 1 && src[src_s] != '\0')
		{
			dst[i] = src[src_s];
			i++;
			src_s++;
		}
		dst[i] = '\0';
	}
	while (src[src_s] != '\0')
		src_s++;
	return (dst_s + src_s);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char d[20] = "";
	char s[20]	= "HAKHA";

	char d_test[20] = "";
	char s_test[20]	= "HAKHA";

	// printf("%d\n",strlcat(d,s,0));
	// printf("%d\n",ft_strlcat(d_test,s_test,0));
	// printf("%d\n",strlcat(d,s,2));
	// printf("%d\n",ft_strlcat(d_test,s_test,2));
	// printf("%d\n",strlcat(d,s,5));
	// printf("%d\n",ft_strlcat(d_test,s_test,5));

	// char d[20] = "Vis";
	// char s[20]	= "";

	// char d_test[20] = "Vis";
	// char s_test[20]	= "";

	printf("%d\n",strlcat(d,s,8));
	printf("%d\n",ft_strlcat(d_test,s_test,8));
} */