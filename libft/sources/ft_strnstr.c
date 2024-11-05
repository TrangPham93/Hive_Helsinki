/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:45:57 by trpham            #+#    #+#             */
/*   Updated: 2024/11/05 22:09:11 by trpham           ###   ########.fr       */
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
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	// const char	*p;

	// i = 0;
	if (little == (void *)0)
		return ((char *)big);
	while (len-- && ft_strlen((char *)big) >= ft_strlen((char *)little))
	{
		if (ft_strncmp(big, little, len) == 0)
			return ((char *)big);
		big++;
	}
	return ((void *)0);
}


#include <stdio.h>

#include <string.h>

int	main(void)
{
	char	*s1 = "NOhowb\n";
	char	*s2 = "how";
	
	
	// printf("%s\n", strnstr(s1, s2, 7));
	printf("%s\n", ft_strnstr(s1, s2, 7));
	printf("\n");
	// printf("%d\n", strnstr(s1, s2, 5));
	// printf("%d\n", ft_strnstr(s1, s2, 5));
	// printf("\n");
	// printf("%d\n", strnstr(s1, s2, 6));
	// printf("%d\n", ft_strnstr(s1, s2, 6));
	// printf("\n");
	// printf("%d\n", strnstr(s1, s2, 8));
	// printf("%d\n", ft_strnstr(s1, s2, 8));
	// printf("\n");
	// printf("%d\n", strnstr(s1, s2, 0));
	// printf("%d\n", ft_strnstr(s1, s2, 0));
	// printf("\n");
	// char	*s3 = "how ";
	// char	*s4 = "howare";
	// printf("%d\n", strnstr(s3, s4, 4));
	// printf("%d\n", ft_strnstr(s3, s4, 4));

	return (0);
}
