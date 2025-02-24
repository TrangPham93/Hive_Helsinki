/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:21:15 by trpham            #+#    #+#             */
/*   Updated: 2025/02/24 19:12:33 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int count_word(char *s)
{
	int i = 0;
	int in_word = -1;
	int	count = 0;
	
	while (s[i])
	{
		if ((s[i] != '\t' && s[i] != ' ' && s[i] != '\n') && in_word == -1)
		{
			count++;
			in_word = 0;		
		}
		else if (s[i] == '\t' || s[i] == ' ' || s[i] == '\n')
			in_word = -1;
		i++;
	}
	return (count);
	
}

char *split_word(char *s)
{
	int i = 0;
	char *word;
	
	while (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
	{
		i++;
	}
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	word[i] = '\0';
	while (i--)
	{
		word[i] = s[i];
	}
	return (word);	
	
}

void free_arr(char **arr, int i)
{
	while (i)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
}

char **ft_split(char *s)
{
	char	**arr;
	int		count;
	int		i = 0;

	count = count_word(s);
	arr = malloc(sizeof(char *) * (count) + 1);
	if (!arr)
		return (NULL);
	while (*s)
	{
		if (*s == ' ' || *s == '\t' || *s == '\n')
			s++;
		else
		{
			arr[i] = split_word(s);
			// printf("%s\n", arr[i]);
			if (!arr[i])
			{
				free_arr(arr, i);
				return(NULL);
			}
			i++;
			while (*s && *s != ' ' && *s != '\n' && *s != '\t')
				s++;
		}
	}
	arr[i] = NULL;
	return (arr);
}


int	main(int ac, char **av)
{
	char *s;
	char	**arr;
	int		count;
	int i = 0;
	char c;

	if (ac == 2)
	{
		s = av[1];
		count = count_word(av[1]);
		printf("word count %d\n", count);
		arr = ft_split(s);
		while ( count)
		{
			i = count - 1;
			while (*arr[i])
			{
				c = *arr[i];
				write(1, &c, 1);
				arr[i]++;
			}
			write(1, " ", 1);
			count--;
		}
		// i = 0;
		// while (i < count)
		// {
		// 	printf("%s\n", arr[i]);
		// 	i++;
		// }
		
		
	}
	write(1, "\n", 1);
}