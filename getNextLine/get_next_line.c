/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:32:14 by trpham            #+#    #+#             */
/*   Updated: 2024/11/25 15:41:32 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*get_next_line(int	fd)
{
	ssize_t	bytes_read;
	ssize_t	length;
	static void	*buffer;

	buffer = malloc((BUFFER_SIZE ) + 1);
	if (!buffer)
		return (0);
	length = 0;
	bytes_read = -1;
	while (bytes_read) // ==0 end of file
	{
		bytes_read = read(fd, buffer, sizeof(buffer));
		if (bytes_read == -1) // error in reading
			return (NULL);
		length += bytes_read;
		
	}
	// buffer[bytes_read] = '\0';
	free(buffer);
	return (0);
}

