/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:41:10 by trpham            #+#    #+#             */
/*   Updated: 2024/11/01 18:28:18 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(char *s, int c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[20] = "or longer";
	char	test_str[20] = "or longer";

	printf("%s\n", memset(str, '-', 3));
	printf("%s\n", memset(str, '-', 15));

	printf("%s\n", ft_memset(test_str, '*', 3));
	printf("%s\n", ft_memset(test_str, '*', 15));

	return (0);
}
*/