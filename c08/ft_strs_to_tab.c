/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:50:18 by trpham            #+#    #+#             */
/*   Updated: 2024/09/25 11:13:56 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

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

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*result;

	i = 0;
	result = malloc ((ac + 1) * sizeof(t_stock_str));
	if (result == NULL)
		return (NULL);
	while (i < ac)
	{	
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		result[i].copy = ft_strdup(av[i]);
		i++;
	}
	result[i].str = 0;
	return (result);
}

#include <stdio.h>

int	main(void)
{
	char	*str[] = {"hello","","!1"};
	int	count = 3;
	int	i = 0;
	t_stock_str *result;
	
	result = ft_strs_to_tab(count, str);
	if (result == NULL)
		printf("%s\n", "malloc failed");
	else
	{	while (i < count)
		{
			printf("%d\n", result[i].size);
			printf("%s\n", result[i].str);
			printf("%s\n", result[i].copy);
			i++;
		}
			free(result);
	}
	return (0);
}

