/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:46:09 by trpham            #+#    #+#             */
/*   Updated: 2024/11/13 17:41:43 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char const *source)
{
	int	i_dest;
	int	i_source;

	i_dest = 0;
	i_source = 0;
	while (dest[i_dest])
		i_dest++;
	while (source[i_source])
	{
		dest[i_dest] = source[i_source];
		i_dest++;
		i_source++;
	}
	dest[i_dest] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	total_len;

	total_len = 0;
	if (s1 != NULL)
		total_len += ft_strlen(s1);
	if (s2 != NULL)
		total_len += ft_strlen(s2);
	total_len += 1;
	if (total_len == 1)
	{
		s = malloc(1);
		s[0] = '\0';
		return (s);
	}
	s = malloc(total_len);
	if (s == NULL)
		return (NULL);
	s[0] = '\0';
	if (s1)
		ft_strcat(s, s1);
	if (s2)
		ft_strcat(s, s2);
	return (s);
}
