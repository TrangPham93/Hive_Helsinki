/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:41:41 by trpham            #+#    #+#             */
/*   Updated: 2024/09/22 14:41:42 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi.h"
#include "ft_putnbr.h"
#include "ft_strcmp.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		a;
	char	*astr;

	if (argc == 2)
	{
		a = ft_atoi(argv[1]);
		astr = ft_putnbr(a);
		printf("%s\n", astr);
		printf("%d\n", ft_strcmp(astr, "20"));
	}	
	else if (argc == 3)
	{
		a = ft_atoi(argv[2]);
		astr = ft_putnbr(a);
		printf("%s\n", astr);
		printf("%d\n", ft_strcmp(astr, "20"));
	}
	return (0);
}
