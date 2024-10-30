/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:26:45 by trpham            #+#    #+#             */
/*   Updated: 2024/09/26 11:02:55 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	is;
	int	id;

	is = 0;
	id = 0;
	while (dest[id] != '\0')
		id++;
	while (src[is] != '\0')
	{
		dest[id] = src[is];
		is++;
		id++;
	}
	dest [id] = '\0';
	return (dest);
}

int	total_len(int size, char **strs, char *sep)
{
	int	length;
	int	i;

	length = 0;
	i = -1;
	if (size == 0)
		return (1);
	while (i++ < size)
		length += ft_strlen(strs[i]);
	return (length + ft_strlen(sep) * (size -1) + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;

	if (size <= 0)
	{
		result = malloc(sizeof(char));
		*result = '\0';
		return (result);
	}
	result = malloc(total_len(size, strs, sep) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	i = -1;
	while (++i < size)
	{
		result = ft_strcat(result, strs[i]);
		if (i < size - 1)
			result = ft_strcat(result, sep);
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	char	*str[] = {"one", "five", "four", "three", "two", ""};
	char	*a;
	int		count = 3	;

	a = ft_strjoin(count, str, ",");
	if (count > 0)
	{	
		printf("%s\n", a);
		free(a);
	}
	else
	{	
		printf("%s\n", "count of string <= 0");
		free(a);
	}
	return (0);
}

