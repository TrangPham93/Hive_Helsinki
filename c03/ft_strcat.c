/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:57:10 by trpham            #+#    #+#             */
/*   Updated: 2024/09/11 13:57:12 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*	
#include <stdio.h>

int	main(void)
{
	char source[20] = "or longer";
	char dest[20] = "short ";
	char *a;
	
	a = ft_strcat(dest, source);
	printf("%s", a);
}
*/
