/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:43:57 by trpham            #+#    #+#             */
/*   Updated: 2024/11/05 21:16:27 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/* #include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s1 = "howb\n";
	char	*s2 = "howare";
	
	
	printf("%d\n", strncmp(s1, s2, 3));
	printf("%d\n", ft_strncmp(s1, s2, 3));
	printf("\n");
	printf("%d\n", strncmp(s1, s2, 5));
	printf("%d\n", ft_strncmp(s1, s2, 5));
	printf("\n");
	printf("%d\n", strncmp(s1, s2, 6));
	printf("%d\n", ft_strncmp(s1, s2, 6));
	printf("\n");
	printf("%d\n", strncmp(s1, s2, 8));
	printf("%d\n", ft_strncmp(s1, s2, 8));
	printf("\n");
	printf("%d\n", strncmp(s1, s2, 0));
	printf("%d\n", ft_strncmp(s1, s2, 0));
	printf("\n");
	char	*s3 = "how ";
	char	*s4 = "howare";
	printf("%d\n", strncmp(s3, s4, 4));
	printf("%d\n", ft_strncmp(s3, s4, 4));

	return (0);
} */