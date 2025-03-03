/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maps.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:44:26 by trpham            #+#    #+#             */
/*   Updated: 2025/03/03 14:47:56 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	read_map(const char *file_name, t_data *data)
{
	int		fd;

	is_valid_filename(file_name);
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		handle_error("Failed to open map", NULL);
	create_map_array(fd, data);
	// fill_map(fd, data);
	print_map(data);
	validate_map(data);
	close(fd);
}

void	create_map_array(int fd, t_data *data)
{
	int	count_row;
	int	i;
	char	*row;
	// char	buffer[]

	count_row = 0;
	i = 0;
	// count_col = 0;
	while (1)
	{
		row = get_next_line(fd);
		if (!row)
			break ;
		count_row++;
		free(row);
	}
	if (count_row == 0)
		handle_error("Map is empty", NULL);
	data->game->map = malloc(sizeof(char *) * (count_row + 1));
	if (!data->game->map)
		handle_error("Memory allocation failed\n", NULL);
	while (i < count_row)
	{
		data->game->map[i] = NULL;
		i++;
	}
	data->game->map[count_row] = NULL;
	fill_map(fd, data);
}

void	fill_map(int fd, t_data *data)
{
	char	*row;
	int		i;
	int		j;

	i = 0;
	while (data->game->map[i])
	{
		row = get_next_line(fd);
		if (!row)
		{
			free_arr(data->game->map, i);
			handle_error("Getnextline failed to read", NULL);
		}
		j = 0;
		data->game->map[i] = malloc(sizeof(char) * ft_strlen(row));
		if (!data->game->map[i])
		{
			free_arr(data->game->map, i);
			handle_error("Memory allocation for each string in array failed", NULL);
		}
		while (row[j] != '\n')
		{
			data->game->map[i][j] = row[j];
			j++;
		}
		data->game->map[i][j] = '\0';
		free(row);
		i++;
	}
}

void	validate_map(t_data *data)
{
	if (is_rectangular(data->game) || is_walled(data->game)
		|| one_player_and_exit(data->game) || collectible_exist(data->game)
		|| not_allowed_element(data->game) || check_path(data->game))
	{
		free_arr(data->game->map, data->game->row_count);
		handle_error("Invalid map!", NULL);
	}
}


int	not_allowed_element(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (i < (*game).row_count)
	{
		j = 0;
		while (j < (*game).col_count)
		{
			if ((game->map)[i][j] != 'P' && (game->map)[i][j] != 'E'
				&& (game->map)[i][j] != 'C' && (game->map)[i][j] != '1'
				&& (game->map)[i][j] != '0')
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_rectangular(t_game *game)
{
	int	i;
	int	len;
	int	std_len;

	i = 0;
	std_len = ft_strlen((game->map)[0]);
	while (i < (*game).row_count)
	{
		len = ft_strlen((game->map)[i]);
		if (len != std_len)
			return (-1);
		i++;
	}
	game->col_count = std_len;
	return (0);
}

int	is_walled(t_game *game)
{
	int	i;
	int	j;
	int	last_row;
	int	last_col;

	i = 0;
	j = 0;
	last_row = (*game).row_count - 1;
	last_col = (*game).col_count - 1;
	while (j <= last_col)
	{
		if ((game->map)[0][j] != '1' || (game->map)[last_row][j] != '1')
			return (-1);
		j++;
	}
	while (i <= last_row)
	{
		if ((game->map)[i][0] != '1' || (game->map)[i][last_col] != '1')
			return (-1);
		i++;
	}
	return (0);
}

