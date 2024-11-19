/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:26:36 by trpham            #+#    #+#             */
/*   Updated: 2024/11/09 14:51:26 by trpham           ###   ########.fr       */
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

static char	*ft_writeword(const char *s, size_t	start, size_t end)
{
	char	*word;
	size_t	i;
	size_t	j;

	i = 0;
	j = start;
	word = malloc(end - start + 1);
	if (word == NULL)
		return (NULL);
	while (i <= end - start)
	{
		word[i] = s[j];
		i++;
		j++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_free_words_arr(char **word_arr, size_t count)
{
	while (count--)
		free(word_arr[count]);
	free(word_arr);
}

char	**ft_split(char const *s, char c)
{
	char	**words_arr;
	size_t	word_count;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	end = 0;
	i = 0;
	if (!s)
		return (NULL);
	word_count = ft_countword(s, c);
	words_arr = malloc((word_count + 1) * sizeof(char *));
	if (words_arr == NULL)
		return (NULL);
	word_count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
			start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			end = i;
			words_arr[word_count] = ft_writeword(s, start, end);
			if (words_arr[word_count] == NULL)
			{
				ft_free_words_arr(words_arr, word_count);
				return (NULL);
			}
			word_count++;
		}
		i++;
	}
	words_arr[word_count] = NULL;
	return (words_arr);
}

/* #include <stdio.h>

int	main(void)
{
	char	*s = "-split-this----k--hhi";
	char	**a;
	int	i;

	i = 0;
	a = ft_split(s,'-');
	
	// printf("%s\n", ft_writeword(s,1, 5));
	while (a[i])
	{
		printf("%s\n", a[i]);
		i++;
	}
	return (0);
} */