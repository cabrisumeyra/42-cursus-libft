/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scabri <scabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:11:46 by scabri            #+#    #+#             */
/*   Updated: 2023/11/04 16:43:10 by scabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	word_counter;

	word_counter = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			word_counter++;
			while (*s && *s != c)
				s++;
		}
	}
	return (word_counter);
}

static void	free_array(size_t	i, char **array)
{
	while (i > 0)
	{
		i--;
		free(*(array + i));
	}
	free(array);
}

static char	**split(char const *s, char c, char **array, size_t words_count)
{
	size_t	i;
	size_t	j;
	size_t	let_count;

	i = 0;
	j = 0;
	while (i < words_count)
	{
		if (*(s + j) == c)
			j++;
		else
		{
			let_count = 0;
			while (*(s + j) && *(s + j) != c && ++let_count)
				j++;
			*(array + i) = ft_substr((s + j - let_count), 0, let_count);
			if (!*(array + i))
				return (free_array(i, array), NULL);
			i++;
		}
	}
	return (*(array + i) = NULL, array);
}

char	**ft_split(char const	*s, char c)
{
	char	**array;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	array = split(s, c, array, words);
	return (array);
}
