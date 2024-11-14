/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:26:44 by trpham            #+#    #+#             */
/*   Updated: 2024/11/14 16:18:38 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_s;
	size_t	i;
	size_t	src_s;

	if (!dst && size == 0)
		return (ft_strlen(src));
	i = 0;
	src_s = 0;
	while (dst[i] && i < size)
		i++;
	dst_s = i;
	if (size > dst_s)
	{
		while (size - i > 1 && src[src_s])
		{
			dst[i] = src[src_s];
			i++;
			src_s++;
		}
		dst[i] = '\0';
	}
	while (src[src_s])
		src_s++;
	return (dst_s + src_s);
}
