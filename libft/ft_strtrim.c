/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:17:26 by trpham            #+#    #+#             */
/*   Updated: 2024/11/11 18:29:48 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
ft_isset() return 0 if not in set, return 1 if in set
*/

#include "libft.h"

static int	ft_isset(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	end;

	start = 0;
	if (s1 == NULL)
		return (NULL);
	end = ft_strlen(s1);
	while (ft_isset(set, s1[start]))
		start++;
	while ((end > start) && ft_isset(set, s1[end - 1]))
		end--;
	result = malloc(end - start + 1);
	if (result == NULL)
		return (NULL);
	ft_memmove(result, s1 + start, end - start);
	result[end - start] = '\0';
	return (result);
}

/* #include <stdio.h>

int	main(void)
{
	char	*s1 = "bacHellocb";
	char	*s2 = "abc";

	// char	*s1 = "baccb";
	// char	*s2 = "abc";

	// char	*s1 = "";
	// char	*s2 = "abc";

	char	*a;

	a = ft_strtrim(s1, s2);
	printf("%s\n", a ? a : "null");
	return (0);
} */