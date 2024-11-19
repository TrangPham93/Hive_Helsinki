/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:12:05 by trpham            #+#    #+#             */
/*   Updated: 2024/11/09 16:35:14 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	len = ft_strlen(s);
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}
/* # include <stdio.h>

static void	ft_test(unsigned int i, char	*s)
{
	(void) i;
	*s = *s - 32;
	return;
}

int	main(void)
{
	char	s[] = "check";

	printf("Before %s\n", s);
	ft_striteri(s, ft_test);
	printf("After %s\n", s);
	return (0);
} */