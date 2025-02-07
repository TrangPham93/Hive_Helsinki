/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:48:49 by trpham            #+#    #+#             */
/*   Updated: 2025/02/07 11:10:12 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*word;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		word = argv[1];
		while (word[i] == ' ' || word[i] == '\t')
			i++;
		while (word[i] != ' ' && word[i] != '\t' && word[i] != '\0')
		{
			write(1, &word[i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
