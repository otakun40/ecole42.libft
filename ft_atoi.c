/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacoby <pjacoby@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:55:49 by pjacoby           #+#    #+#             */
/*   Updated: 2021/10/22 00:50:58 by pjacoby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	long	minus;
	long	result;

	minus = 1;
	result = 0;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n'
		|| *nptr == '\f' || *nptr == '\r' || *nptr == '\v')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			minus *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		if (result > 0 && result * 10 + (*nptr - '0') < 0 && minus == 1)
			return (-1);
		else if (result > 0 && result * 10 + (*nptr - '0') < 0 && minus == -1)
			return (0);
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return ((int)(result * minus));
}
