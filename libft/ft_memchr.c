/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:28:05 by trpham            #+#    #+#             */
/*   Updated: 2024/11/05 21:14:27 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	if (n == 0)
		return ((void *)0);
	while (n--)
	{
		if (*p == (unsigned char)c)
			return ((unsigned char *)p);
		p++;
	}
	return ((void *)0);
}
/* #include <string.h>
#include <stdio.h>

int	main(void)
{
	char 	*p = "Vi sao lai the";

	printf("Beforememchr %p\n", p);
	printf("Aftermemchr %p\n", ft_memchr(p, 'l',15));
	printf("Aftermemchr %p\n",memchr(p, 'l',15));
	printf("\n");
	printf("Beforememchr %p\n", p);
	printf("Aftermemchr %p\n", ft_memchr(p, 'z',5));
	printf("Aftermemchr %p\n",memchr(p, 'z',5));
	printf("\n");
	printf("Beforememchr %p\n", p);
	printf("Aftermemchr %p\n", ft_memchr(p, '\0',5));
	printf("Aftermemchr %p\n",memchr(p, '\0',5));
	printf("\n");
	char 	*s1 = "Vi sao sai the";

	printf("Beforememchr %p\n", s1);
	printf("Aftermemchr %p\n", ft_memchr(s1, 'p',5));
	printf("Aftermemchr %p\n",memchr(s1, 'p',5));

	return (0);
} */