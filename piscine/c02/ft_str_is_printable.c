/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:39:13 by trpham            #+#    #+#             */
/*   Updated: 2024/09/11 10:39:18 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 32 && str[count] <= 126)
			count++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int main (void)
{
	char string[20] = "f d%~af";
	int a;
	
	a = ft_str_is_printable(string);
	printf("%d", a);
	
}
*/
