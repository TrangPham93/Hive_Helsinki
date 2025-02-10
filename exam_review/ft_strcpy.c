/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 08:11:07 by trpham            #+#    #+#             */
/*   Updated: 2025/02/10 08:31:43 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *s1, char *s2)
{
	// int	s2_len;
	char	*temp;

	// s2_len = ft_strlen(s2);
	// s1 = malloc((s2_len + 1) * sizeof (char));
	// if (*s1)
	// 	return ((void *)0);
	temp = s1;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++; 
	}
	*s1 = '\0';
	return (temp);
}

int	main(void)
{
	char	*src = "source\n";
	char	*dst = malloc(8);

	dst = ft_strcpy(dst, src);
	printf("%s\n", dst);
}