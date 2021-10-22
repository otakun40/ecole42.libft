/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacoby <pjacoby@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:59:21 by pjacoby           #+#    #+#             */
/*   Updated: 2021/10/22 00:05:57 by pjacoby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen >= dstsize)
		return (dstsize + srclen);
	dst += dstlen;
	dstsize -= dstlen;
	if (dstsize > srclen)
	{
		while ((srclen-- + 1) && *src)
			*dst++ = *src++;
		*dst = 0;
	}
	else
	{
		while (--dstsize && *src)
			*dst++ = *src++;
		*dst = 0;
	}
	return (dstlen + srclen);
}
