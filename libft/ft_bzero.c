/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:28:42 by trpham            #+#    #+#             */
/*   Updated: 2024/11/11 15:30:45 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	ft_memset(p, '\0', n);
}
/* #include <strings.h>
#include <stdio.h>

int	main(void)
{
	char	str[20] = "or longer";
	char	test_str[20] = "or longer";

	bzero(str, 3);
	printf("%s\n", str + 3);
	bzero(str, 4);
	printf("%s\n", str + 4);
	// 	The characters after the first three null bytes are still in memory, 
	// 	but they're not printed because printf 
	// stops at the first null terminator it encounters.
	ft_bzero(test_str, 3);
	printf("%s\n", test_str + 3);
	ft_bzero(test_str, 4);
	printf("%s\n", test_str + 4);
	return (0);
} */
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int		main(int argc, const char *argv[])
{
	void	*mem;

	alarm(5);
	if (argc == 1 || !(mem = malloc(sizeof(*mem) * 5)))
		return (0);
	if (atoi(argv[1]) == 1)
	{
		memset(mem, 'e', 5);
		ft_bzero(mem, 5);
		write(1, mem, 5);
	}
	else if (atoi(argv[1]) == 2)
	{
		memset(mem, 'e', 5);
		ft_bzero(mem, 0);
		write(1, mem, 5);
	}
	return (0);
}
