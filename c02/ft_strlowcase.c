/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:48:11 by trpham            #+#    #+#             */
/*   Updated: 2024/09/12 11:48:14 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
			str[count] = str[count] +32;
		count++;
	}
	return (str);
}
/*
#include <stdio.h>
int main (void)
{
	char string[20] = "AAo4Fk";
	printf("%s", ft_strlowcase("fdKKK%4"));
	
}
*/
