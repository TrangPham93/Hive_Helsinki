/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:45:57 by trpham            #+#    #+#             */
/*   Updated: 2024/11/13 16:59:02 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	little_len = ft_strlen(little);
	if (len < little_len)
		return ((void *)0);
	while (i + little_len <= len && big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len && j < little_len)
			j++;
		if (j == little_len)
			return ((char *)&big[i]);
		i++;
	}
	return ((void *)0);
}
