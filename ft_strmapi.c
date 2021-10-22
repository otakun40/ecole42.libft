/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacoby <pjacoby@student.21-school.ru      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:05:14 by pjacoby           #+#    #+#             */
/*   Updated: 2021/10/21 23:53:56 by pjacoby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	size_t		len;
	char		*result;

	if (s == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	result = (char *) malloc(sizeof(char) * (len + 1));
	if (result)
	{
		while (i < len)
		{
			result[i] = f(i, s[i]);
			i++;
		}
		result[i] = 0;
	}
	return (result);
}
