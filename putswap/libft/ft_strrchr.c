/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:30:22 by trpham            #+#    #+#             */
/*   Updated: 2024/11/18 12:55:12 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	p = (NULL);
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			p = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)p);
}
