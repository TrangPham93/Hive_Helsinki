/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_delete.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 15:05:44 by trpham            #+#    #+#             */
/*   Updated: 2025/06/26 14:34:20 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	print_array(char **arr)
{
	int	i;

	i = 0;
	printf("ARR: ");
	while (arr[i])
	{
		printf("%s, ", arr[i]);
		i++;
	}
	printf("\n");
}

void	print_long_array(long long *arr)
{
	int	i;

	i = 0;
	printf("ARR: ");
	while (arr[i])
	{
		printf("%lld, ", arr[i]);
		i++;
	}
	printf("\n");
}

// Modified lock_and_printf to accept format string and value:
void lock_and_print_msg(t_philo *philo, const char *format)
{
	pthread_mutex_lock(&philo->table->write_lock);
	printf("philo [%d] %s \n", philo->id , format);
	pthread_mutex_unlock(&philo->table->write_lock);
}
