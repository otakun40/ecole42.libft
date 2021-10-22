/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacoby <pjacoby@student.21-school.ru      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:57:56 by pjacoby           #+#    #+#             */
/*   Updated: 2021/10/16 22:47:41 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *str, char c)
{
	int	count;

	count = 0;
	while (*str == c)
		str++;
	while (*str)
	{
		if ((*str != c && *(str + 1) == c)
			|| (*str != c && *(str + 1) == 0))
			count++;
		str++;
	}
	return (count);
}

static char	*ft_get_word(char const *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (word)
	{
		word[i] = 0;
		i--;
		while (i >= 0)
		{
			word[i] = s[i];
			i--;
		}
	}
	return (word);
}

static char	**ft_get_one_string(const char *string)
{
	char	**res;

	res = (char **) malloc(sizeof(char *) * 2);
	res[0] = (char *)string;
	res[1] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	**result;

	if (s == NULL)
		return (NULL);
	if (c == '\0')
		return (ft_get_one_string(s));
	i = 0;
	words = ft_count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (result)
	{
		while (i < words)
		{
			while (*s == c)
				s++;
			result[i] = ft_get_word(s, c);
			while (*s != c)
				s++;
			i++;
		}
		result[i] = 0;
	}
	return (result);
}
