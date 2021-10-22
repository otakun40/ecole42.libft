/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacoby <pjacoby@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:02:35 by pjacoby           #+#    #+#             */
/*   Updated: 2021/10/22 00:01:05 by pjacoby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		needle_len;
	size_t	i;
	char	*hay;

	i = -1;
	hay = (char *) malloc(sizeof(char) * (len + 1));
	hay[len] = 0;
	while (++i < len)
		hay[i] = haystack[i];
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	i = -1;
	while (*(hay + ++i))
	{
		if (!ft_strncmp(hay + i, needle, needle_len))
		{
			free(hay);
			return ((char *)haystack + i);
		}
	}
	return (0);
}
