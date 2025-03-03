/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maps_helper1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:07:10 by trpham            #+#    #+#             */
/*   Updated: 2025/03/03 13:29:03 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	is_valid_filename(const char *str)
{
	int		len;
	char	*file_type;

	len = ft_strlen(str);
	file_type = ft_substr(str, len - 4, 4);
	if (!file_type)
		handle_error("substr file type not succeed", NULL);
	if (ft_strcmp(file_type, ".ber") != 0)
		handle_error("Not a valid file", file_type);
	free(file_type);
}
int	one_player_and_exit(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (i++ < (*game).row_count - 1)
	{
		j = 1;
		while (j < (*game).col_count - 1)
		{
			if ((game->map)[i][j] == 'P')
			{
				(*game).player_count++;
				game->player.y = i;
				game->player.x = j;
			}
			else if ((game->map)[i][j] == 'E')
				(*game).exit_count++;
			j++;
		}
	}
	if ((*game).player_count != 1 || (*game).exit_count != 1)
		return (-1);
	return (0);
}

int	collectible_exist(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (i++ < (*game).row_count - 1)
	{
		j = 1;
		while (j < (*game).col_count - 1)
		{
			if ((game->map)[i][j] == 'C')
				(*game).collectible_count++;
			j++;
		}
	}
	if ((*game).collectible_count < 1)
		return (-1);
	return (0);
}

char	**duplicate_map(t_game *game)
{
	char	**temp_map;
	int		i;

	temp_map = malloc(sizeof(char *) * game->row_count);
	if (!temp_map)
		handle_error("Memory allocation for temporary map failed", NULL);
	i = 0;
	while (i < game->row_count)
	{
		temp_map[i] = ft_strdup((game->map)[i]);
		if (!temp_map[i])
		{
			free_arr(temp_map, i);
			handle_error("ft_strdup row failed", NULL);
		}
		i++;
	}
	return (temp_map);
}
