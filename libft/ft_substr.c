/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:07:19 by trpham            #+#    #+#             */
/*   Updated: 2024/11/12 18:17:23 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*substr;

	i = 0;
	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (malloc(1));
	if (s_len - start <= len)
		substr = malloc(s_len - start + 1);
	else
		substr = malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/* #include <stdio.h>

int	main(void)
{
	char	*s = "one two";
	char	*a;

	// char	*s = "";
	// char	*a;

	// char	*s = "one";
	// char	*a;

	a = ft_substr(s, 7, 4);
	printf("%s\n", a ? a : "null");
	free(a);
	return (0);	
} */