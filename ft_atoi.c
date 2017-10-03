/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynenakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 19:15:56 by ynenakho          #+#    #+#             */
/*   Updated: 2017/09/26 15:49:41 by ynenakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int res;
	int sign;

	res = 0;
	sign = 1;
	while (*str == '\n' || *str == ' ' || *str == '\t'
			|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10;
		res = res + *str - 48;
		str++;
	}
	return (res * sign);
}
