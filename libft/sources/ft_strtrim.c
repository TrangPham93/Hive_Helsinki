/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:17:26 by trpham            #+#    #+#             */
/*   Updated: 2024/11/07 19:20:09 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

int	ft_isset()

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len;
	char	*newstr;
	int	i;
	int	j;

	if (s1 == NULL)
		return (NULL);
	// newstr = s1;	
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] != set[j])
				j++;
			else
			{
				s1++;
				j = 0;
			}
		}
		i++;
	}
	
	
	
	
}