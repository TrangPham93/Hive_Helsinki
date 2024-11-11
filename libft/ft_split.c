/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:26:36 by trpham            #+#    #+#             */
/*   Updated: 2024/11/11 20:23:24 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(const char *s, char c)
{
	size_t	count;
	size_t	word_flag;

	count = 0;
	word_flag = 0;
	while (*s)
	{
		if (*s == c)
		{	
			if (word_flag == 1)
			{
				count++;
				word_flag = 0;
			}
		}
		else
			word_flag = 1;
		s++;
	}
	if (word_flag == 1)
		count++;
	return (count);
}

static void	ft_free_words_arr(char **word_arr, size_t count)
{
	while (count--)
		free(word_arr[count]);
	free(word_arr);
}

static char	*ft_word_extract(const char *s, char c)
{
	char	*word;
	// char	*start;
	size_t	word_len;
	// size_t	i;

	word_len = 0;
	while (s[word_len] != c && s[word_len])
	{
		word_len++;
	}
	
	// while (*s == c)
	// 	s++;
	word = ft_substr(s, 0, word_len);
	// start = s;
	// word_len = 0;
	// while (*s != c && *s != '\0')
	// {
	// 	word_len++;
	// 	s++;
	// }
	// word = malloc(word_len + 1);
	// if (word == NULL)
	// 	return (NULL);
	// i = 0;
	// while (*start != c && *start != '\0' && i < word_len)
	// {
	// 	word[i] = *start;
	// 	i++;
	// 	start++;
	// }
	// word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**words_arr;
	// char	*current_s;
	size_t	word_count;
	size_t	i;

	if (!s)
		return (NULL);
	word_count = ft_countword(s, c);
	words_arr = malloc((word_count + 1) * sizeof(char *));
	if (words_arr == NULL)
		return (NULL);
	i = 0;
	// current_s = s;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			words_arr[i] = ft_word_extract(s, c);
			if (i < word_count)
			{
				if (words_arr[i] == NULL)
				{
					ft_free_words_arr(words_arr, i);
					return (NULL);
				}
				i++;
				while (*s && *s != c)
					s++;
			}
		}
		
	}
	words_arr[i] = NULL;
	return (words_arr);
}

#include <stdio.h>

int	main(void)
{
	char	*s = "-split-this----k--nhi";
	char	**a;
	int	i;

	i = 0;
	a = ft_split(s,'-');
	
	while (a[i])
	{
		printf("%s\n", a[i]);
		i++;
	}
	return (0);
} 