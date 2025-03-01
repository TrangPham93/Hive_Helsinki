/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:45:07 by trpham            #+#    #+#             */
/*   Updated: 2025/03/01 15:13:26 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	on_keypress(int keycode, t_data *data)
{
	if (keycode == AU || keycode == W)
		move_player(data, data->game->player.x, data->game->player.y - 1);
	else if (keycode == AD || keycode == S)
		move_player(data, data->game->player.x, data->game->player.y + 1);
	else if (keycode == AL || keycode == A)
		move_player(data, data->game->player.x - 1, data->game->player.y);
	else if (keycode == AR || keycode == D)
		move_player(data, data->game->player.x + 1, data->game->player.y);
	else if (keycode == ESC)
		on_destroy(data);
	return (0);
}

int	on_destroy(t_data *data)
{
	// t_data	*data;

	// data = (t_data *)param;
	free_arr(data->game->map, data->game->row_count);
	if (data->img_background)
		mlx_destroy_image(data->mlx_ptr, data->img_background);
	if (data->img_collects)
		mlx_destroy_image(data->mlx_ptr, data->img_collects);
	if (data->img_exit)
		mlx_destroy_image(data->mlx_ptr, data->img_exit);
	if (data->img_player)
		mlx_destroy_image(data->mlx_ptr, data->img_player);
	if (data->img_wall)
		mlx_destroy_image(data->mlx_ptr, data->img_wall);
	// mlx_destroy_window(data->mlx_ptr, data->mlx_win);
	// mlx_destroy_display(data->mlx_ptr);
	// free_mlx(data);
	if (data->mlx_win)
		mlx_destroy_window(data->mlx_ptr, data->mlx_win);
	if (data->mlx_ptr)
		mlx_destroy_display(data->mlx_ptr);
	free(data->mlx_ptr); // is this necessary?
	
	
	exit(0);
	return (0);
}
// void	free_mlx(t_data *data)
// {
	
// }