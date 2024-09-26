/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:58:13 by trpham            #+#    #+#             */
/*   Updated: 2024/09/18 11:01:21 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		count;
	int		i;
	int		j;

	count = 0;
	while (src[count])
		count++;
	dup = malloc(count + 1);
	if (dup == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < count)
	{
		dup[j] = src[i];
		j++;
		i++;
	}
	dup[j] = '\0';
	return (dup);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s;
	char	*b;

	s = "kjdfk j";
	b = ft_strdup(s);
	printf("%s", b);
	free(b);
}
*/
