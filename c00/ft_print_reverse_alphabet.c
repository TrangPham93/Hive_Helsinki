/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 09:40:11 by trpham            #+#    #+#             */
/*   Updated: 2024/09/05 14:37:16 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
Create a function
*/

void	ft_print_reverse_alphabet(void)
{
	char	variable;

	variable = 'z';
	while (variable >= 'a')
	{
		write(1, &variable, 1);
		variable--;
	}
}
