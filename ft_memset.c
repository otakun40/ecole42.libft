/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacoby <pjacoby@student.21-school.ru      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:24:22 by pjacoby           #+#    #+#             */
/*   Updated: 2021/10/09 13:37:44 by pjacoby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*bstr;

	i = 0;
	bstr = (unsigned char *)b;
	if (len > 0)
		while (i < len)
			bstr[i++] = c;
	return (b);
}
