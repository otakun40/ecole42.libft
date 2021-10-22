/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacoby <pjacoby@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:23:48 by pjacoby           #+#    #+#             */
/*   Updated: 2021/10/22 02:35:14 by pjacoby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		start;
	int		end;

	i = 0;
	if (!s1)
		return (0);
	if (!*s1)
		return ("");	
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]))
		start++;
	while (ft_strchr(set, s1[end]))
		end--;
	if (start >= end)
		return ("");
	trim = (char *)malloc(sizeof(char) * (end - start + 2));
	if (trim)
	{
		while (start <= end)
			trim[i++] = s1[start++];
		trim[i] = 0;
	}
	return (trim);
}
