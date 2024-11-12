/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:51:13 by trpham            #+#    #+#             */
/*   Updated: 2024/11/12 18:22:50 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"                                                                                                                                

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/* #include <stdio.h>

int	main(void)
{
	// char	*s = "";
	char	*s = "lkfakldf";
	char	*a;

	a = ft_strdup(s);
	printf("%s\n", a ? a : "null");
	free(a);
	return (0);
} */
