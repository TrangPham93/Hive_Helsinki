/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:26:05 by trpham            #+#    #+#             */
/*   Updated: 2024/11/07 11:50:10 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}

void	ft_bzero(void	*s, size_t n)
{
	ft_memset(s, '\0', n);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*p;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (size > 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	ft_memset(p, '\0', nmemb * size);
	return (p);
}
/* 
#include <stdio.h>

int	main(void)
{
	// char	*s1 = calloc(5, 4);
	// char	*s2 = ft_calloc( 5, 4);

	// char	*s1 = calloc(5, 0);
	// char	*s2 = ft_calloc( 5, 0);

	char	*s1 = calloc(0, 3);
	char	*s2 = ft_calloc( 0, 3);

	if (s1 && s2 && ft_memcmp(s1, s2, 5*4)== 0)
		printf("%s\n", "true");
	else
		printf("%s\n", "false");

	free(s1);
	free(s2);
	return (0);
} */