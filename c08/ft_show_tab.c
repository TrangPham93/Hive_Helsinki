/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:11:43 by trpham            #+#    #+#             */
/*   Updated: 2024/09/25 11:18:06 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(unsigned int nb)
{
	char	digit;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	digit = nb % 10 + '0';
	write(1, &digit, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	if (par == NULL)
		return ;
	else
	{
		while (par[i].str != NULL)
		{
			ft_putstr(par[i].str);
			write(1, "\n", 1);
			ft_putnbr(par[i].size);
			write(1, "\n", 1);
			ft_putstr(par[i].copy);
			write(1, "\n", 1);
			i++;
		}
	}
}

#include <stdlib.h>
#include <stdio.h>

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
	if (ac < 1)
		return (NULL);
	result = (t_stock_str *) malloc ((ac + 1) * sizeof(t_stock_str));
	if (result == NULL)
		return (NULL);
	while (i < ac)
	{	
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		result[i].copy = ft_strdup(av[i]);
		i++;
	}
	result[i].size = 0;
	result[i].str = NULL;
	result[i].copy = NULL;
	return (result);
}

int	main(void)
{
	char		*str[] = {"", "", ""};
	int			i = 0;
	int			count = 3;
	t_stock_str	*result;

	result = ft_strs_to_tab(count, str);
	ft_show_tab(result);
	while (i < count)
	{
		free(result[i].copy);
		i++;
	}
	free(result);
	return (0);
}

