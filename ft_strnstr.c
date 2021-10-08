/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacoby <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 20:06:55 by pjacoby           #+#    #+#             */
/*   Updated: 2021/10/08 22:34:21 by pjacoby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_libft.h"

#include <stdio.h>

static int	first_dif_char(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (i < n - 1))
		i++;
	if (s1[i] - s2[i])
		return (i);
	else
		return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	needle_len;
	int	skip;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *) haystack);
	while (*haystack && len > 0)
	{
		if (*haystack == *needle)
		{
			skip = first_dif_char(haystack, needle, needle_len);
			if (skip == 0)
				return ((char *)haystack);
			else
			{
				haystack += skip;
				len -= skip;
			}
		}
		haystack++;
		len--;
	}
	return (0);
}
