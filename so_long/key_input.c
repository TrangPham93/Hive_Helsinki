/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:45:07 by trpham            #+#    #+#             */
/*   Updated: 2025/02/28 16:23:43 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


int	on_keypress(int keycode, t_data *data)
{
	if (keycode == U)
		move_player(data, data->game->player.x, data->game->player.y - 1);
	else if (keycode == D)
		move_player(data, data->game->player.x, data->game->player.y + 1);
	else if (keycode == L)
		move_player(data, data->game->player.x - 1, data->game->player.y);
	else if (keycode == R)
		move_player(data, data->game->player.x + 1, data->game->player.y);
	else if (keycode == ESC)
		on_destroy((void *)data);
	return (0);
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
	}
	if (next_location == 'E' && data->game->total_collect
		== data->game->collectible_count)
	{
		ft_putstr_fd("You win!!\n", 1);
		on_destroy((void *)data);
	}
	data->game->player.x = new_x;
	data->game->player.y = new_y;
	data->game->total_move++;
	ft_printf("Total moves: %d\n", data->game->total_move);
	load_asset(data);
}

int on_destroy(void *param)
{
    t_data *data = (t_data *)param;
    
	free_map(data);
    if (data->mlx_win)
        mlx_destroy_window(data->mlx_ptr, data->mlx_win);
    if (data->mlx_ptr)
    {
        mlx_destroy_display(data->mlx_ptr);
		free(data->mlx_ptr); // is this necessary?
    }
	exit(0);
    return (0);
}

void	free_map(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->game->row_count)
	{
		free(data->game->map[i]);
		i++;
	}
	free(data->game->map);
}