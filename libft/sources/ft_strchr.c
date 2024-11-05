/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:39:30 by trpham            #+#    #+#             */
/*   Updated: 2024/11/05 19:03:20 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((void *)0);
}

/* #include <string.h>
#include <stdio.h>

int	main(void)
{
	char 	*s = "Vi sao lai the";

	printf("Before strchr %p\n", s);
	printf("After strchr %p\n", ft_strchr(s, 'l'));

	printf("Before strchr %p\n", s);
	printf("After strchr %p\n", ft_strchr(s, 'z'));

	printf("Before strchr %p\n", s);
	printf("After strchr %p\n", ft_strchr(s, '\0'));

	char 	*s1 = "Vi sao sai the";

	printf("Before strchr %p\n", s1);
	printf("After strchr %p\n", ft_strchr(s, 's'));

	return (0);
} */