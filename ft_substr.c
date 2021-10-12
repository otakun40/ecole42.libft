/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacoby <pjacoby@student.21-school.ru      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 00:58:08 by pjacoby           #+#    #+#             */
/*   Updated: 2021/10/12 22:21:01 by pjacoby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	slen;
	size_t	substringlen;

	i = 0;
	slen = ft_strlen(s);
	if (len == 0 || start > slen)
		return (NULL);
	else if (start + len > slen)
		substringlen = slen - start;
	else
		substringlen = len;
	substring = (char *)malloc(sizeof(char) * (substringlen + 1));
	if (substring != NULL)
	{
		while (i < substringlen)
		{
			substring[i] = s[start];
			i++;
			start++;
		}
		substring[start] = 0;
	}
	return (substring);
}
