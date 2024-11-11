/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:23:39 by trpham            #+#    #+#             */
/*   Updated: 2024/11/11 16:12:57 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
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