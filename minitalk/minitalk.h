/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 11:43:09 by trpham            #+#    #+#             */
/*   Updated: 2025/03/12 12:14:52 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "./libft/includes/libft.h"
# include "./libft/includes/ft_printf.h"
# include <signal.h>

void	send_signal(int pid, int sig);

#endif