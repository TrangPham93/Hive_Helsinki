/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:06:11 by trpham            #+#    #+#             */
/*   Updated: 2024/11/28 13:22:41 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

void	test2(void)
{
	char	*nextline;
	int		fd;
	int		count;

	fd = open("text2.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Error! Could not open file\n");
		exit (-1);
	}
	count = 0;
	while (1)
	{
		nextline = get_next_line(fd);
		if (!nextline)
		{
			printf("EOF! Could not get next line\n");
			break ;
		}
		count++;
		printf("return line [%d]:%s\n", count, nextline);
		free(nextline);
	}
	close(fd);
}