/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacoby <pjacoby@student.21-school.ru      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:59:21 by pjacoby           #+#    #+#             */
/*   Updated: 2021/10/09 11:59:25 by pjacoby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	result;

	result = ft_strlen(dst) + ft_strlen(src);
	if (dstsize > 0)
	{
		while (*dst)
		{
			dst++;
			dstsize--;
		}
		while (dstsize > 1 && *src)
		{
			*dst = *src;
			dst++;
			src++;
			dstsize--;
		}
		*dst = 0;
	}
	return (result);
}
