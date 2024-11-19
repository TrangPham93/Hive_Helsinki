/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:36:11 by trpham            #+#    #+#             */
/*   Updated: 2024/11/09 16:55:51 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
file descripter refer to an open file in a process
0, 1, 2 are stdin, stdout and stderr 
ssize_t write(int fd, const void *buf, size_t count);
buf: a pointer to the data to write
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int	main(void)
{
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1); // flush the output so 'a' is printed out
	return (0);
} */
