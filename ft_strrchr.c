/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacoby <pjacoby@student.21-school.ru      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 02:40:02 by pjacoby           #+#    #+#             */
/*   Updated: 2021/10/09 02:40:07 by pjacoby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*pos;

	pos = 0;
	while (*s)
	{
		if (*s == c)
			pos = (char *)s;
		s++;
	}
	if (*s == 0 && pos == 0)
		return ((char *)s);
	return (pos);
}
