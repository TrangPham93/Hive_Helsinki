/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:45:57 by trpham            #+#    #+#             */
/*   Updated: 2024/11/07 12:07:04 by trpham           ###   ########.fr       */
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
/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1 = "NOhowb\n";
	char	*s2 = "ho";
	char	*result;
	
	result = ft_strnstr(s1, s2, 7);
	printf("%s\n", result ? result : "null");
	printf("\n");

	result = ft_strnstr(s1, s2, 5);
	printf("%s\n", result ? result : "null");
	printf("\n");

	result = ft_strnstr(s1, s2, 3);
	printf("%s\n", result ? result : "null");
	printf("\n");
	
	// printf("%d\n", strnstr(s1, s2, 8));
	// printf("%d\n", ft_strnstr(s1, s2, 8));
	// printf("\n");
	// printf("%d\n", strnstr(s1, s2, 0));
	// printf("%d\n", ft_strnstr(s1, s2, 0));
	// printf("\n");

	char	*s3 = "how ";
	char	*s4 = "";

	result = ft_strnstr(s3, s4, 3);
	printf("%s\n", result ? result : "null");
	printf("\n");

	char	*s5 = "hoa";
	char	*s6 = "hoan";

	result = ft_strnstr(s5, s6, 2);
	printf("%s\n", result ? result : "null");
	printf("\n");

	return (0);
} */
