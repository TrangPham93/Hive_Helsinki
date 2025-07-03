/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 10:07:57 by trpham            #+#    #+#             */
/*   Updated: 2025/07/03 13:39:03 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_data	data;

	if (ac != 2)
	{
		handle_error("No map is chosen", NULL);
		exit(-1);
	}
	init_data(&data);
	read_map(av[1], &data);
	load_window(&data);
	mlx_key_hook(data.mlx_ptr, &on_keypress, &data);
	render_image(&data);
	mlx_loop(data.mlx_ptr);
	destroy(&data);
	return (0);
}

void	init_data(t_data *data)
{
	ft_memset(data, 0, sizeof(data));
}

void	load_asset(t_data *data)
{

	data->txt_background = mlx_load_png("./textures/background.png");
	if (!data->txt_background)
	{
		handle_error("Failed to load background", NULL);
		destroy(data);
	}
	data->img_background = mlx_texture_to_image(data->mlx_ptr, data->txt_background);
	if (!data->img_background)
	{
		handle_error("Failed to convert background", NULL);
		destroy(data);
	}
	
	data->txt_collects = mlx_load_png("./textures/collect.png");
	if (!data->txt_collects)
	{
		handle_error("Failed to load collectibles", NULL);
		destroy(data);
	}
	data->img_collects = mlx_texture_to_image(data->mlx_ptr, data->txt_collects);
	if (!data->img_collects)
	{
		handle_error("Failed to convert collectibles", NULL);
		destroy(data);
	}
	
	data->txt_wall = mlx_load_png("./textures/wall.png");
	if (!data->txt_collects)
	{
		handle_error("Failed to load wall", NULL);
		destroy(data);
	}
	data->img_wall = mlx_texture_to_image(data->mlx_ptr, data->txt_wall);
	if (!data->img_collects)
	{
		handle_error("Failed to convert wall", NULL);
		destroy(data);
	}
	
	data->txt_player = mlx_load_png("./textures/player.png");
	if (!data->txt_collects)
	{
		handle_error("Failed to load cow", NULL);
		destroy(data);
	}
	data->img_player = mlx_texture_to_image(data->mlx_ptr, data->txt_player);
	if (!data->img_collects)
	{
		handle_error("Failed to convert cow", NULL);
		destroy(data);
	}

	data->txt_exit = mlx_load_png("./textures/exit.png");
	if (!data->txt_collects)
	{
		handle_error("Failed to load exit", NULL);
		destroy(data);
	}
	data->img_exit = mlx_texture_to_image(data->mlx_ptr, data->txt_exit);
	if (!data->img_collects)
	{
		handle_error("Failed to convert exit", NULL);
		destroy(data);
	}

}

void		on_keypress(mlx_key_data_t keycode, void *param)
{
	t_data *data =(t_data *)param;
		
	if (keycode.action != MLX_PRESS)
		return ;
	if (keycode.key == MLX_KEY_W || keycode.key == MLX_KEY_UP)
		move_player(data, data->game->player.x, data->game->player.y - 1);
	else if (keycode.key == MLX_KEY_S || keycode.key == MLX_KEY_DOWN)
		move_player(data, data->game->player.x, data->game->player.y + 1);
	else if (keycode.key == MLX_KEY_A || keycode.key == MLX_KEY_LEFT)
		move_player(data, data->game->player.x - 1, data->game->player.y);
	else if (keycode.key == MLX_KEY_D || keycode.key == MLX_KEY_RIGHT)
		move_player(data, data->game->player.x + 1, data->game->player.y);
	else if (keycode.key == MLX_KEY_ESCAPE)
		destroy(data);
}

void	destroy(t_data *data)
{
	if (data->game->map)
	{
		free_arr(data->game->map, data->game->row_count);
		data->game->map = NULL;
	}
	if (data->mlx_ptr && data->img_background)
		mlx_delete_image(data->mlx_ptr, data->img_background);
	if (data->mlx_ptr && data->img_collects)
		mlx_delete_image(data->mlx_ptr, data->img_collects);
	if (data->mlx_ptr && data->img_exit)
		mlx_delete_image(data->mlx_ptr, data->img_exit);
	if (data->mlx_ptr && data->img_player)
		mlx_delete_image(data->mlx_ptr, data->img_player);
	if (data->mlx_ptr && data->img_wall)
		mlx_delete_image(data->mlx_ptr, data->img_wall);
		
	if (data->txt_background)
		mlx_delete_texture(data->txt_background);
	if (data->txt_collects)
		mlx_delete_texture(data->txt_collects);
	if (data->txt_exit)
		mlx_delete_texture(data->txt_exit);
	if (data->txt_player)
		mlx_delete_texture(data->txt_player);
	if (data->txt_wall)
		mlx_delete_texture(data->txt_wall);
		
	if (data->mlx_ptr)
		mlx_terminate(data->mlx_ptr);
	// if (data->mlx_ptr)
	// 	free(data->mlx_ptr);
	exit(0);
}
