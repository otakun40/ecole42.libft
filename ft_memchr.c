/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacoby <pjacoby@student.21-school.ru      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:46:51 by pjacoby           #+#    #+#             */
/*   Updated: 2021/10/09 18:13:09 by pjacoby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i] != c && str[i])
		i++;
	if (str[i] != c)
		return (0);
	if (i == n && str[i - 1] != c)
		return (0);
	return (str + i);
}
