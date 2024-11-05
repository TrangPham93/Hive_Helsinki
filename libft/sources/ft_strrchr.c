/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:30:22 by trpham            #+#    #+#             */
/*   Updated: 2024/11/05 19:41:57 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	p = ((void *)0);
	while (*s != '\0')
	{
		if (*s == c)
			p = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)p);
}
/* 
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char 	*s = "Vi sao lai the";

	printf("Before strchr %p\n", s);
	printf("After strchr %p\n", ft_strrchr(s, 'l'));
	printf("After strchr %p\n", strrchr(s, 'l'));

	printf("Before strchr %p\n", s);
	printf("After strchr %p\n", ft_strrchr(s, 'z'));
	printf("After strchr %p\n", strrchr(s, 'z'));

	printf("Before strchr %p\n", s);
	printf("After strchr %p\n", ft_strrchr(s, '\0'));
	printf("After strchr %p\n", strrchr(s, '\0'));

	char 	*s1 = "Vi sao sai the";

	printf("Before strchr %p\n", s1);
	printf("After strchr %p\n", ft_strrchr(s, 's'));
	printf("After strchr %p\n", strrchr(s, 's'));

	return (0);
} */