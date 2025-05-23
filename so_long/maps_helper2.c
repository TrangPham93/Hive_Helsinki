/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maps_helper2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:43:22 by trpham            #+#    #+#             */
/*   Updated: 2025/03/05 14:49:18 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_path_to_exit(t_game *game)
{
	char	**temp_map;
	int		is_valid;

	temp_map = duplicate_map(game);
	if (!temp_map)
		return (-1);
	is_valid = exit_reachable(game, temp_map, game->player.x, game->player.y);
	free_arr(temp_map, game->row_count);
	temp_map = NULL;
	if (is_valid != 0)
	{
		handle_error("Exit not reachable", NULL);
		return (-1);
	}
	return (0);
}

int	exit_reachable(t_game *game, char **temp_map, int x, int y)
{
	if (x < 1 || x >= game->col_count - 1 || y < 1 || y >= game->row_count - 1
		|| temp_map[y][x] == '1' || temp_map[y][x] == 'V')
		return (-1);
	if (temp_map[y][x] == 'E')
		return (0);
	temp_map[y][x] = 'V';
	if (exit_reachable(game, temp_map, x + 1, y) == 0
		|| exit_reachable(game, temp_map, x - 1, y) == 0
		|| exit_reachable(game, temp_map, x, y + 1) == 0
		|| exit_reachable(game, temp_map, x, y - 1) == 0)
		return (0);
	return (-1);
}

int	check_path_to_collectible(t_game *game)
{
	char	**temp_map;
	int		is_valid;

	temp_map = duplicate_map(game);
	if (!temp_map)
		return (-1);
	is_valid = check_all_collectables(game, temp_map);
	free_arr(temp_map, game->row_count);
	temp_map = NULL;
	if (is_valid != 0)
	{
		handle_error("Items not reachable", NULL);
		return (-1);
	}
	return (0);
}

int	collectables_reachable(t_game *game, char **temp_map, int x, int y)
{
	if (x < 1 || x >= game->col_count - 1 || y < 1 || y >= game->row_count - 1
		|| temp_map[y][x] == '1' || temp_map[y][x] == 'V'
		|| temp_map[y][x] == 'E')
		return (-1);
	if (temp_map[y][x] == 'P')
		return (0);
	temp_map[y][x] = 'V';
	if (collectables_reachable(game, temp_map, x + 1, y) == 0
		|| collectables_reachable(game, temp_map, x - 1, y) == 0
		|| collectables_reachable(game, temp_map, x, y + 1) == 0
		|| collectables_reachable(game, temp_map, x, y - 1) == 0)
		return (0);
	return (-1);
}

int	check_all_collectables(t_game *game, char **temp_map)
{
	int	i;
	int	j;

	i = 0;
	while (i < game->row_count)
	{
		j = 0;
		while (j < game->col_count)
		{
			if (temp_map[i][j] == 'C')
			{
				if (collectables_reachable(game, temp_map, j, i) != 0)
					return (-1);
				reset_temp_map(game, temp_map);
			}
			j++;
		}
		i++;
	}
	return (0);
}
