/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 18:22:11 by trpham            #+#    #+#             */
/*   Updated: 2025/03/18 11:55:31 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <fctl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

static int ft_strlen(char *s)
{
	int count = 0;
	if (!s)
		return (0);
	while (s[count])
	{
		count++;
	}
	return (count);
}

static char *ft_strdup(char *s)
{
	int	count = 0;
	char	*dup;
	int	i = 0;

	if (!s)
		return (NULL);
	while (s[count])
	{
		count++;
	}
	dup = malloc(count + 1);
	if (!dup)
		return (NULL);
	while (i < count)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	char *s;
	size_t len1 = 0;
	size_t len2 = 0;
	size_t i = 0;

	if (!s1 && !s2)
		return (NULL);
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	s = malloc(len1 + len2 + 1);
	if (!s)
		return (NULL);
	while (*s1)
	{
		s[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		s[i] = *s2;
		s2++;
		i++;
	}
	s[i]= '\0';
	return (s);
}

static char *ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if ((char)*s == (char)c)
			return ((char*)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
	
}

char	*read_file(char *main_buffer, int fd)
{
	char *read_buffer;
	char *temp;
	ssize_t read_byte;
	
	read_buffer = malloc(BUFFER_SIZE + 1);
	if (!read_buffer)
		return (NULL);
	while (1)
	{
		read_byte = read(fd, read_buffer, BUFFER_SIZE);
		if (read_byte == -1)
		{
			free(read_buffer);
			read_buffer = NULL;	
			return (NULL);
		}
		read_buffer[read_byte] = '\0';
		temp = ft_strjoin(main_buffer, read_buffer);
		if (!temp)
		return (free(read_buffer), read_buffer = NULL, NULL);
		free(main_buffer);
		main_buffer = temp;
		if (ft_strchr(main_buffer, '\n'))
			break;
		if (read_byte == 0)
			break;
	}
	free(read_buffer);
	read_buffer = NULL;
	return (main_buffer);
}

char *extract_line(char *main_buffer)
{
	char *line;
	int		i = 0;
	int		j = 0;

	while (main_buffer[i] && main_buffer[i] != '\n')
		i++;
	line = malloc(i + 2);
	if (!line)
		return (NULL);
	while (j <= i)
	{
		line[j] = main_buffer[j];
		j++;
	}
	line[j] = '\0';
	return (line);
}

char *update_buffer(char *buffer)
{
	char *newline_pos;
	char *new_buffer;

	newline_pos = ft_strchr(buffer, '\n');
	if (!newline_pos)
		return (NULL);
	new_buffer = ft_strdup(newline_pos + 1);
	if (!new_buffer)
		return (free(buffer),buffer = NULL, NULL);
	return (new_buffer);
}

char *get_next_line(int fd)
{
	static char *main_buffer;
	char *line;
	char *temp;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!main_buffer)
	{
		main_buffer = ft_strdup("");
		if (!main_buffer)
			return (NULL);
	}
	if (!ft_strchr(main_buffer, '\n'))
	{
		temp = read_file(main_buffer, fd);
		if (!temp)
			return (NULL);
		main_buffer = temp;
	}
	line = extract_line(main_buffer);
	if (!line)
		return (free(main_buffer), main_buffer = NULL, NULL);
	temp = update_buffer(main_buffer);
	if (!temp)
		return (free(main_buffer), main_buffer = NULL, NULL);
	free(main_buffer);
	main_buffer = temp;
	return (line);
}



int main(int ac, char *av[])
{
	int fd;
	char *line;
	
	if (ac != 2)
		return (-1);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		printf("not open file\n");
		exit (-1);
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
	
}