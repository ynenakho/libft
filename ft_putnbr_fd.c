/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynenakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 12:42:23 by ynenakho          #+#    #+#             */
/*   Updated: 2017/09/27 18:51:24 by ynenakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	m[13];
	int		counter;

	if (n < 0)
		ft_putchar_fd('-', fd);
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	counter = 0;
	while (n != 0)
	{
		m[counter] = n % 10;
		if (m[counter] < 0)
			m[counter] = -m[counter];
		n /= 10;
		counter++;
	}
	while (counter > 0)
	{
		ft_putchar_fd(m[counter - 1] + '0', fd);
		counter--;
	}
}
