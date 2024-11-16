/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:30:22 by trpham            #+#    #+#             */
/*   Updated: 2024/11/16 15:37:13 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	if (!s)
		return (NULL);
	p = (NULL);
	while (*s)
	{
		if (*s == c)
			p = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)p);
}
