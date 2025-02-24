/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 19:07:35 by trpham            #+#    #+#             */
/*   Updated: 2025/02/24 14:45:19 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int count_words(char *str)
{
	int count = 0;
	int in_word = -1;
	
	while (*str)
	{
		if (*str != ' ' && *str != '\t' && *str != '\n' && in_word == -1)	
		{
			count++;
			in_word = 0;
		}
		else if ((*str == ' ' || *str == '\t' || *str == '\n'))
			in_word = -1;
		str++;
	}
	return (count);
}

char *dup_word(char *str)
{
	char	*substr;
	int		i;
	
	i = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	substr = malloc(sizeof(char) * (i + 1));
	if (!substr)
		return (NULL);
	substr[i] = '\0';
	while (i--)
	{
		substr[i] = str[i];
	}
	return (substr);
}

void	free_arr(char **arr, int word_count)
{
	while (word_count--)
	{
		free(arr[word_count]);
	}
	free(arr);
}

char **ft_split(char *str)
{
	int word_count = 0;
	char **arr;
	int i = 0;

	word_count = count_words(str);
	arr = malloc(sizeof(char *) * word_count + 1);
	if (!arr)
		return (NULL);
	while (*str)
	{
		if (*str != ' ' && *str != '\t' && *str != '\n')
		{
			arr[i] = dup_word(str);
			if (!arr[i])
			{
				free_arr(arr, i);
				return (NULL);
			}
			i++;
			while (*str && *str != ' ' && *str != '\t' && *str != '\n')
				str++;
		}
		else
			str++;
	}
	return (arr);
}

int main(void)
{

	int word_count = 0;
	int i = 0;
	char	*str = "   bao nhieu 	tu   kiem tra xem ?";

	word_count = count_words("  bao nhieu 	tu   kiem tra xem ?");
	printf("%d\n", word_count);
	while (i < word_count)
	{
		printf("%s\n", ft_split(str)[i]);
		i++;
	}
	
	// ft_split("	bao nhieu tu   ");
}