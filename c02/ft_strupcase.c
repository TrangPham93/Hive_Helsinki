/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:57:15 by trpham            #+#    #+#             */
/*   Updated: 2024/09/11 11:57:21 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		count;
	char	a;

	count = 0;
	while (str[count] != '\0')
	{
		a = str[count];
		if (str[count] >= 'a' && str[count] <= 'z')
			str[count] = a -32;
		count++;
	}
	return (str);
}
/*
#include <stdio.h>
int main (void)
{
	char string[20] = "fddff";
	char *a;
	
	a = ft_strupcase(string);
	printf("%s", a);
	
}
*/
