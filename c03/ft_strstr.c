/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:26:56 by trpham            #+#    #+#             */
/*   Updated: 2024/09/11 14:26:59 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*temp;
	char	*start;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		temp = to_find;
		start = str;
		while (*str == *to_find)
		{
			to_find++;
			str++;
			if (*to_find == '\0')
				return (start);
		}
		str = start + 1;
		to_find = temp;
	}
	return ((void *)0);
}
/*
#include <stdio.h>

int    main(void)
{
    char host[20] = "or  longer";
    char find[20] = "r  l";
    char *a;
    
    a = ft_strstr(host, find);
    printf("%s", a);
}
*/
