/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:52:32 by trpham            #+#    #+#             */
/*   Updated: 2024/11/09 16:11:25 by trpham           ###   ########.fr       */
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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*newstr;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	newstr = malloc(len + 1);
	if (newstr == NULL)
		return (NULL);
	while (i < len)
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	newstr[len] = '\0';
	return (newstr);
}

/* char	ft_testfunc(unsigned int i, char c)
{
	(void) i;
	c = c - 32;
	return (c);
}

#include <stdio.h>

int	main(void)
{
	char	*s = "check";
	char	*newstr;

	newstr = ft_strmapi(s, ft_testfunc);
	if (newstr)
	{
		printf("%s\n", newstr);
	}
	free(newstr);
	return (0);
} */
