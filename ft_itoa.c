/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynenakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 18:26:41 by ynenakho          #+#    #+#             */
/*   Updated: 2017/09/26 16:22:27 by ynenakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_counter(int n)
{
	int		counter;

	counter = 0;
	if (n < 0)
	{
		n *= -1;
		counter++;
	}
	while (n > 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

char			*ft_itoa(int n)
{
	int		counter;
	char	*new;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	counter = ft_counter(n);
	if (!(new = ft_strnew(counter)))
		return (NULL);
	if (n < 0)
	{
		new[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		new[counter - 1] = n % 10 + '0';
		n = n / 10;
		counter--;
	}
	return (new);
}
