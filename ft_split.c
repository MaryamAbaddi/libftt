/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaddi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:55:37 by mabaddi           #+#    #+#             */
/*   Updated: 2025/09/11 12:56:00 by mabaddi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*cpyword(const char *head, int wlen)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(wlen + 1);
	if (!word)
		return (NULL);
	while (i < wlen)
	{
		word[i] = head[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	frees(char **arr)
{
	int	i;

	i = 0;
	if (!arr)
		return ;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

static size_t	word_count(const char *s, char c)
{
	size_t	wordcount;
	size_t	in_word;

	in_word = 0;
	wordcount = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			wordcount++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (wordcount);
}

static char	**fill_words(char **array, const char *s, char c, size_t word_count)
{
	size_t		j;
	size_t		wlen;
	const char	*head;

	j = 0;
	while (*s && j < word_count)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		head = s;
		wlen = 0;
		while (s[wlen] && s[wlen] != c)
			wlen++;
		array[j++] = cpyword(head, wlen);
		if (!array[j - 1])
		{
			frees(array);
			return (NULL);
		}
		s += wlen;
	}
	array[j] = NULL;
	return (array);
}

char	**ft_split(const char *s, char c)
{
	size_t	wordcount;
	char	**arr;

	if (!s)
		return (NULL);
	wordcount = word_count(s, c);
	arr = malloc((wordcount + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	if (!(fill_words(arr, s, c, wordcount)))
		return (NULL);
	return (arr);
}
/*
 #include <stdio.h>

 int main()
{
 	char **strs = ft_split("hi this is farah", '\0');

	int i = 0;
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		free(strs[i]);
		i++;
	}
 	free(strs);
 }*/
