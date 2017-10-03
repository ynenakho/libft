/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynenakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 16:28:54 by ynenakho          #+#    #+#             */
/*   Updated: 2017/09/27 18:48:50 by ynenakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char	m[13];
	int		counter;

	if (n < 0)
		ft_putchar('-');
	if (n == 0)
	{
		ft_putchar('0');
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
		ft_putchar(m[counter - 1] + '0');
		counter--;
	}
}
