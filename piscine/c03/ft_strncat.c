/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:01:56 by trpham            #+#    #+#             */
/*   Updated: 2024/09/13 08:36:17 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	is;
	unsigned int	id;

	is = 0;
	id = 0;
	while (dest[id] != '\0')
		id++;
	while (is < nb && src[is] != '\0')
	{
		dest[id] = src[is];
		is++;
		id++;
	}
	dest [id] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char source[20] = "or";
	char dest[20] = "short ";
	char *a;
	
	a = ft_strncat(dest, source, 5);
	printf("%s", a);
}
*/
