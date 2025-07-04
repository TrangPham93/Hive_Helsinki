/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 16:32:30 by trpham            #+#    #+#             */
/*   Updated: 2025/06/26 17:58:40 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*philo_routine(void *arg)
{
	t_philo	*philo;

	philo = (t_philo *)arg;
	if (philo->table->no_philo == 1)
	{
		thinking_routine(philo);
		pthread_mutex_lock(philo->l_fork);
		lock_and_printf(philo, "has taken a fork");
		pthread_mutex_unlock(philo->l_fork);
		ft_usleep(philo->table->time_to_die, philo);
		return (NULL);
	}
	if (is_even_id(philo->id) == TRUE)
	{
		thinking_routine(philo);
		ft_usleep(10, philo); // 1 mlsecond works, but not longer
	}
	while (get_dead_flag(philo) == FALSE)
	{
		thinking_routine(philo);
		if (eating_routine(philo) == FALSE)
			break ;
		sleeping_routine(philo);
	}
	return (NULL);
}

void	thinking_routine(t_philo *philo)
{
	lock_and_printf(philo, "is thinking");
	ft_usleep((philo->table->time_to_die - philo->table->time_to_eat
			- philo->table->time_to_sleep) / 2, philo);
}

void	sleeping_routine(t_philo *philo)
{
	lock_and_printf(philo, "is sleeping");
	ft_usleep(philo->table->time_to_sleep, philo);
}

int	eating_routine(t_philo *philo)
{
	if (is_even_id(philo->id) == FALSE)
	{
		if (odd_lock_fork(philo) == FALSE)
			return (FALSE);
	}
	else
	{
		if (even_lock_fork(philo) == FALSE)
			return (FALSE);
	}
	pthread_mutex_lock(&philo->table->meal_lock);
	philo->last_meal_time = get_current_time();
	philo->meal_eaten++;
	pthread_mutex_unlock(&philo->table->meal_lock);
	lock_and_printf(philo, "is eating");
	if (ft_usleep(philo->table->time_to_eat, philo) == FALSE)
	{
		pthread_mutex_unlock(philo->l_fork);
		pthread_mutex_unlock(philo->r_fork);
		return (FALSE);
	}
	unlock_fork(philo);
	return (TRUE);
}

int	get_dead_flag(t_philo *philo)
{
	pthread_mutex_lock(&philo->table->dead_lock);
	if ((philo->table->dead_flag) == TRUE)
	{
		pthread_mutex_unlock(&philo->table->dead_lock);
		return (TRUE);
	}
	pthread_mutex_unlock(&philo->table->dead_lock);
	return (FALSE);
}
