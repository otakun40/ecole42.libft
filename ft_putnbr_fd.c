/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacoby <pjacoby@student.21-school.ru      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 22:37:48 by pjacoby           #+#    #+#             */
/*   Updated: 2021/10/12 22:37:59 by pjacoby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	arr[10];
	long	nb;
	int		i;

	nb = n;
	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	while (nb != 0)
	{
		arr[i] = nb % 10 + '0';
		nb /= 10;
		if (nb != 0)
			i++;
	}
	while (i >= 0)
	{
		write(fd, &arr[i], 1);
		i--;
	}
}
