/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:43:34 by trpham            #+#    #+#             */
/*   Updated: 2024/09/05 14:35:11 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
Create a function
 */
void	ft_print_alphabet(void)
{
	char	variable;

	variable = 'a';
	while (variable <= 'z')
	{
		write(1, &variable, 1);
		variable++;
	}
}
