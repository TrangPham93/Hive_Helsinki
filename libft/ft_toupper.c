/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:09:44 by trpham            #+#    #+#             */
/*   Updated: 2024/11/05 18:29:05 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/* #include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%c\n", toupper('c'));
	printf("%c\n",ft_toupper('c'));

	printf("%c\n", toupper('K'));
	printf("%c\n",ft_toupper('K'));

	printf("%s\n", toupper('\0'));
	printf("%s\n",ft_toupper('\0'));
	
	printf("%d\n", toupper(5));
	printf("%d\n",ft_toupper(5));

	printf("%c\n", toupper('d'));
	printf("%c\n",ft_toupper('d'));

	return (0);

} */