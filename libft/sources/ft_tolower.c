/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:23:39 by trpham            #+#    #+#             */
/*   Updated: 2024/11/05 18:38:12 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/* #include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%c\n", tolower('A'));
	printf("%c\n",ft_tolower('A'));

	printf("%c\n", tolower('k'));
	printf("%c\n",ft_tolower('k'));

	printf("%d\n", tolower('\0'));
	printf("%d\n",ft_tolower('\0'));
	
	printf("%d\n", tolower(5));
	printf("%d\n",ft_tolower(5));

	printf("%c\n", tolower('Z'));
	printf("%c\n",ft_tolower('Z'));

	return (0);
} */