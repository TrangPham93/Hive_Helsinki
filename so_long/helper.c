/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:45:21 by trpham            #+#    #+#             */
/*   Updated: 2025/03/03 13:27:32 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	handle_error(char *s, char *to_free)
{
	if (to_free)
		free(to_free);
	ft_putstr_fd("Error\n", 2);
	ft_putstr_fd(s, 2);
	ft_putstr_fd("\n", 2);
	exit(-1);
}

void	free_arr(char **arr, int count)
{
	int	i;

	if (!arr)
		return ;
	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	winner_print(void)
{
	ft_printf("-----------------------------------------------\n");
	ft_printf("|    🎉🎉🎉  Congratulations!!!!!  🎉🎉🎉     |\n");
	ft_printf("|    You found all collectibles and exit.     |\n");
	ft_printf("|        ✓✓✓✓✓✓✓✓ You won! ✓✓✓✓✓✓✓✓           |\n");
	ft_printf("-----------------------------------------------\n");
}


void print_map(t_data *data)
{
    int i;
    
    i = 0;
	if (!data->game->map)
		handle_error("there is no map to print", NULL);
    while (i < data->game->row_count)
	{
		ft_printf("%s\n", data->game->map[i]);
		i++;
    }
}