/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacoby <pjacoby@student.21-school.ru      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:28:44 by pjacoby           #+#    #+#             */
/*   Updated: 2021/10/09 14:44:48 by pjacoby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	buf_len;
	size_t	i;
	char	*d;
	char	*s;

	buf_len = ft_strlen(dst);
	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (len > 0)
	{
		while (i < len && i < buf_len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
