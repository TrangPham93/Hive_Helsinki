/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 19:07:35 by trpham            #+#    #+#             */
/*   Updated: 2025/02/17 21:36:41 by trpham           ###   ########.fr       */
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

char **fill_word(char *str)
{
	while (*str)
	{
		if ()
	}
	
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
	while (i < word_count)
	{
		arr[0] = fill_word()
		i++;
	}
	
	
}
int main(void)
{

	int word_count = 0;

	word_count = count_words("  bao nhieu 	tu   kiem tra xem ?");
	printf("%d\n", word_count);
		
	
	// ft_split("	bao nhieu tu   ");
}