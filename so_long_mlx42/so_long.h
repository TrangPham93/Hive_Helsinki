/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 09:39:11 by trpham            #+#    #+#             */
/*   Updated: 2025/07/03 11:08:19 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx42/include/MLX42/MLX42.h"
# include <fcntl.h>
# include <X11/X.h>
# include "./libft/includes/get_next_line.h"
# include "./libft/includes/libft.h"
# include <stdio.h> //to delete

# define PXL 32
# define MAX_COL 3840 //3840 /64 = 60
# define MAX_ROW 2160 //2160 / 64 = 33

typedef struct s_axis
{
	int32_t		x;
	int32_t		y;
}	t_axis;

typedef struct s_game
{
	char	**map;
	int32_t		row_count;
	int32_t		col_count;
	int32_t		player_count;
	int32_t		exit_count;
	int32_t		collectible_count;
	t_axis	player;
	int32_t		total_move;
	int32_t		total_collect;
}	t_game;

typedef struct s_data
{
	mlx_t	*mlx_ptr;
	mlx_texture_t	*txt_background;
	mlx_texture_t	*txt_collects;
	mlx_texture_t	*txt_player;
	mlx_texture_t	*txt_exit;
	mlx_texture_t	*txt_wall;
	mlx_image_t	*img_background;
	mlx_image_t	*img_collects;
	mlx_image_t	*img_player;
	mlx_image_t	*img_exit;
	mlx_image_t	*img_wall;
	t_game	*game;
	t_axis	win_size;
}	t_data;

// initialize data structure
void	init_data(t_data *data);

// read map and validate the maps
void	read_map(const char *file_name, t_data *data);
char	*read_and_join_line(int fd);
void	is_valid_filename(const char *str);
int		validate_map(char *str, t_data *data);
int		is_rectangular(t_game *game);
int		is_walled(t_game *game);
int		one_player(t_game *game);
int		one_exit(t_game *game);
int		collectible_exist(t_game *game);
int		not_allowed_element(t_game *game);
char	**duplicate_map(t_game *game);
void	reset_temp_map(t_game *game, char **temp_map);
int		check_map_condition(t_data *data);

// check whether the map allows the player to exit and all collectibles
int		check_path_to_collectible(t_game *game);
int		check_path_to_exit(t_game *game);
int		exit_reachable(t_game *game, char **temp_map, int x, int y);
int		collectables_reachable(t_game *game, char **temp_map, int x, int y);
int		check_all_collectables(t_game *game, char **temp_map);

// load assets
void	load_window(t_data *data);
void	load_asset(t_data *data);

// rendering all images
void	render_image(t_data *data);
void	render_img_background(t_data *data);
void	render_img_exit_wall(t_data *data);
void	render_img_player(t_data *data);
void	render_img_collectibles(t_data *data);

// keyboard action
void	on_keypress(mlx_key_data_t keycode, void *param);
// void	on_keypress(mlx_key_data_t keycode, t_data *data);
void	move_player(t_data *data, int new_x, int new_y);
void	destroy(t_data *data);

// helper function
void	handle_error(char *s, char *to_free);
void	winner_print(void);
void	free_arr(char **arr, int count);
void	ft_free(char *ptr);
void	close_file_and_exit(int fd, char *str);

#endif