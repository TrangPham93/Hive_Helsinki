/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 18:27:07 by trpham            #+#    #+#             */
/*   Updated: 2025/02/17 19:04:35 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"
void fill(char **tab, t_point size, char old_value, int x, int y);

void  flood_fill(char **tab, t_point size, t_point begin)
{
	char old_value;

	old_value = tab[begin.y][begin.x];
	fill(tab, size, old_value, begin.x, begin.y);

	
}

void fill(char **tab, t_point size, char old_value, int x, int y)
{
	if (x < 0 || x >= size.x || y < 0 || y >= size.y || tab[y][x] != old_value)
		return ;
	if (tab[y][x] == 'F')
		return ;
	tab[y][x] = 'F';
	fill(tab, size, old_value, x + 1, y);
	fill(tab, size, old_value, x - 1, y);
	fill(tab, size, old_value, x, y + 1);
	fill(tab, size, old_value, x, y - 1);

}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **make_area(char **zone, int height)
{
    char **area;
    int i;

    area = (char **)malloc(sizeof(char *) * height);
    for (i = 0; i < height; i++)
    {
        area[i] = strdup(zone[i]);
    }
    return area;
}

void print_tab(char **tab, t_point size)
{
    for (int i = 0; i < size.y; i++)
    {
        printf("%s\n", tab[i]);
    }
}

int main()
{
    t_point size = {8, 5};
    t_point begin = {2, 2};
    char *zone[] = {
        "11111111",
        "10001001",
        "10010001",
        "10110001",
        "11000001"
    };

    char **area = make_area(zone, size.y);
    print_tab(area, size);
    printf("\nApplying Flood Fill:\n\n");
    flood_fill(area, size, begin);
    print_tab(area, size);

    return (0);
}
