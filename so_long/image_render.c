/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image_render.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:44:35 by trpham            #+#    #+#             */
/*   Updated: 2025/02/21 23:18:02 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


void	load_window(t_data *data, t_game *game)
{
	data->mlx_win = mlx_new_window(data->mlx_ptr, game->col_count * IMG_W,
		game->row_count * IMG_H , "so_long");
	if (!data->mlx_win)
		handle_error("Failed to initialize a window");
}

void	load_background(t_data *data, t_game *game)
{
	char	*relative_path = "./images/tiles.xpm";
	int		img_height = IMG_H;
	int 	img_width = IMG_W;
	int		i;
	int		j;
	
	data->img_background = mlx_xpm_file_to_image(data->mlx_ptr, relative_path,
		&img_width, &img_height);
	if (!data->img_background)
	{
		mlx_destroy_image(data->mlx_ptr, data->img_background);
		handle_error("Failed to load image");
	}
	i = -1;
	while (++i < game->row_count)
	{
		j = -1;
		while (++j < game->col_count)
		{
			mlx_put_image_to_window(data->mlx_ptr, data->mlx_win,
				data->img_background, j * IMG_W, i * IMG_H);
		}
	}
}

void	load_images(t_data *data)
{
	int		img_height = IMG_H;
	int 	img_width = IMG_W;
	
	data->img_wall = mlx_xpm_file_to_image(data->mlx_ptr,
		"./images/wall.xpm", &img_width, &img_height);
	data->img_player = mlx_xpm_file_to_image(data->mlx_ptr,
		"./images/cow.xpm",	&img_width, &img_height);
	data->img_exit = mlx_xpm_file_to_image(data->mlx_ptr,
		"./images/exit.xpm", &img_width, &img_height);
	data->img_collects = mlx_xpm_file_to_image(data->mlx_ptr,
		"./images/milk.xpm", &img_width, &img_height);
	if (!data->img_exit || !data->img_collects || !data->img_player
		|| !data->img_wall)
	{
		mlx_destroy_image(data->mlx_ptr, data->img_exit);
		mlx_destroy_image(data->mlx_ptr, data->img_collects);
		mlx_destroy_image(data->mlx_ptr, data->img_player);
		mlx_destroy_image(data->mlx_ptr, data->img_wall);
		handle_error("Failed to load image");
	}
}

void	render_img_exit_wall(t_data *data, t_game *game)
{
	int	i;
	int	j;
	
	load_images(data);
	i = -1;
	while (++i < game->row_count)
	{
		j = -1;
		while (++j < game->col_count)
		{
			if ((game->map)[i][j] == 'E')
			{
				game->exit.y = i;
				game->exit.x = j;
				mlx_put_image_to_window(data->mlx_ptr, data->mlx_win,
					data->img_exit, j * IMG_W, i * IMG_H);
			}
			else if ((game->map)[i][j] == '1')
				mlx_put_image_to_window(data->mlx_ptr, data->mlx_win,
				data->img_wall, j * IMG_W, i * IMG_H);
		}
	}
}
void	render_img_player(t_data *data)
{
	// int	i;
	// int	j;
	
	mlx_put_image_to_window(data->mlx_ptr, data->mlx_win,
		data->img_player, data->game->player.x * IMG_W, data->game->player.y * IMG_H);
	
	
	// i = -1;
	// while (++i < game->row_count)
	// {
	// 	j = -1;
	// 	while (++j < game->col_count)
	// 	{
	// 		if ((game->map)[i][j] == 'P')
	// 			mlx_put_image_to_window(data->mlx_ptr, data->mlx_win,
	// 			data->img_player, j * 32, i * 32);
	// 	}
	// }
}

void	render_img_collectibles(t_data *data, t_game *game)
{
	int	i;
	int	j;
	
	i = -1;
	while (++i < game->row_count)
	{
		j = -1;
		while (++j < game->col_count)
		{
			if ((game->map)[i][j] == 'C')
				mlx_put_image_to_window(data->mlx_ptr, data->mlx_win,
				data->img_collects, j * IMG_W, i * IMG_H);
		}
	}
}