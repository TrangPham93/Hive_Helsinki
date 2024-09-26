/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:37:48 by trpham            #+#    #+#             */
/*   Updated: 2024/09/12 11:29:28 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	cmp;

	i = 0;
	cmp = 0;
	while ((i < n) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (cmp);
}
/*
#include <stdio.h>

int	main(void)
{
	char s1[20] = "losge";
	char s2[20] = "loett";
	int a;
	
	a = ft_strncmp(s1, s2, 0);
	printf("%d", a);
}
*/
