/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:44:51 by trpham            #+#    #+#             */
/*   Updated: 2025/07/03 12:07:00 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	remove_current_collects(t_data *data, int new_x, int new_y)
{
	int	i;

	i = 0;
	while (i < data->game->collectible_count)
	{
		if (data->img_collects->instances[i].x == new_x * PXL
			&& data->img_collects->instances[i].y == new_y * PXL)
		{
			data->img_collects->instances[i].enabled = false;
			break ;
		}
		i++;
	}
	
}

void	move_player(t_data *data, int new_x, int new_y)
{
	char	next_location;

	next_location = data->game->map[new_y][new_x];
	if (next_location == '1' || (next_location == 'E'
			&& data->game->total_collect < data->game->collectible_count))
		return ;
	if (next_location == 'C')
	{
		data->game->total_collect++;
		data->game->map[new_y][new_x] = '0';
		remove_current_collects(data, new_x, new_y);

	}
	if (next_location == 'E'
		&& data->game->total_collect == data->game->collectible_count)
	{
		winner_print();
		destroy(data);
	}
	data->game->player.x = new_x;
	data->game->player.y = new_y;
	data->img_player->instances->x = new_x * PXL;
	data->img_player->instances->y = new_y * PXL;
	data->game->total_move++;
	ft_putstr_fd("Number of movements : ", 1);
	ft_putnbr_fd(data->game->total_move, 1);
	ft_putstr_fd("\n", 1);
}


