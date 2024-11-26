/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:32:14 by trpham            #+#    #+#             */
/*   Updated: 2024/11/26 17:32:50 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char *read_file(char *buffer, int	fd);
char	*extract_line(char	*buffer);
char	*extract_remaining(char *buffer);

char	*get_next_line(int	fd)
{
	static char	*main_buffer;
	char	*line;
	char	*temp;
	
	if (!main_buffer)
		main_buffer = ft_calloc(1, sizeof(char));
	if (!main_buffer) // EOF, reading error or calloc fail
		return(NULL);
	if (!ft_strchr(main_buffer, '\n'))
	{
		temp = read_file(main_buffer, fd);
		if (!temp)
			return (free(main_buffer), NULL);
		free(main_buffer);
		main_buffer = temp;
	}
	line = extract_line(main_buffer);
	if (!line)
		return (free(main_buffer), NULL);
	temp = extract_remaining(main_buffer);
	free(main_buffer);
	main_buffer = temp;
	return (line);
}

char	*read_file(char *buffer, int	fd)
{
	ssize_t	bytes_read;
	char	*read_buffer;

	read_buffer = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!read_buffer)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0) // 0 EOF & -1  reading error
	{
		bytes_read = read(fd, read_buffer, BUFFER_SIZE);
		if (bytes_read <= 0) 
			return (free(read_buffer), NULL);
		read_buffer[bytes_read] = '\0';
		buffer = ft_strjoin(buffer, read_buffer);
		if (!buffer)
			return (free(buffer), free(read_buffer), NULL);
		if (ft_strchr(buffer, '\n'))
			break;
	}
	free(read_buffer);
	return (buffer);
}
char	*extract_line(char	*buffer)
{
	char	*line;
	int		i;

	i = 0;
	while (buffer[i] != '\n' && buffer[i] != '\0')
		i++;
	if (i == 0)
		return (buffer);
	line = ft_substr(buffer, 0, i);
	return (line);
}
char	*extract_remaining(char *buffer)
{
	char	*remaining;
	char	*newline_position;
	
	newline_position = ft_strchr(buffer, '\n');
	if (!newline_position)
		return (ft_strdup(""));
	remaining = ft_strdup(newline_position + 1);
	return (remaining);
}
