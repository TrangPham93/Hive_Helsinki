/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image_render.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:44:35 by trpham            #+#    #+#             */
/*   Updated: 2025/07/03 13:53:20 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_window(t_data *data)
{
	mlx_set_setting(MLX_MAXIMIZED, true);
	
	data->mlx_ptr = mlx_init(data->game->row_count * PXL, data->game->col_count * PXL, "so long", false);
	if (!data->mlx_ptr)
	{
		free_arr(data->game->map, data->game->row_count);
		data->game->map = NULL;
		handle_error("Failed to initialize Mlx", NULL);
		exit(-1);
	}

	if (data->mlx_ptr->height > MAX_ROW || data->mlx_ptr->width > MAX_COL)
	{
		free_arr(data->game->map, data->game->row_count);
		data->game->map = NULL;
		handle_error("Map is too big", NULL);
		exit(-1);
	}
	load_asset(data);
}

void	render_image(t_data *data)
{
	render_img_background(data);
	render_img_exit_wall(data);
	render_img_collectibles(data);
	render_img_player(data);
}

void	render_img_background(t_data *data)
{
	int	i;
	int	j;

	i = -1;
	while (++i < data->game->row_count)
	{
		j = -1;
		while (++j < data->game->col_count)
		{
			if (mlx_image_to_window(data->mlx_ptr, data->img_background, j * PXL, i * PXL) < 0)
			{
				handle_error("Failed to put background to window", NULL);
				exit(-1); // return to main function and destroy img properly
			}
		}
	}
}

void	render_img_exit_wall(t_data *data)
{
	int	i;
	int	j;

	i = -1;
	while (++i < data->game->row_count)
	{
		j = -1;
		while (++j < data->game->col_count)
		{
			if ((data->game->map)[i][j] == 'E')
			{
				mlx_image_to_window(data->mlx_ptr, data->img_exit, j * PXL, i * PXL);
			}
			else if ((data->game->map)[i][j] == '1')
				mlx_image_to_window(data->mlx_ptr, data->img_wall, j * PXL, i * PXL);
		}
	}
}

void	render_img_collectibles(t_data *data)
{
	int	i;
	int	j;

	i = -1;
	while (++i < data->game->row_count)
	{
		j = -1;
		while (++j < data->game->col_count)
		{
			if ((data->game->map)[i][j] == 'C')
				mlx_image_to_window(data->mlx_ptr, data->img_collects, j * PXL, i * PXL);
		}
	}
}

void	render_img_player(t_data *data)
{
	mlx_image_to_window(data->mlx_ptr, data->img_player, data->game->player.x * PXL, data->game->player.y * PXL);
}