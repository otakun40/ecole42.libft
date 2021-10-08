/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacoby <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:36:26 by pjacoby           #+#    #+#             */
/*   Updated: 2021/10/08 13:36:29 by pjacoby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_libft.h"

size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if (dstsize > 0)
	{
		while ((i < (dstsize - 1)) && (i < src_len))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (src_len);
}
