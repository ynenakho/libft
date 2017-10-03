/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynenakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 13:16:28 by ynenakho          #+#    #+#             */
/*   Updated: 2017/09/21 13:57:49 by ynenakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *x;

	x = (unsigned char*)b;
	while (len > 0)
	{
		*x = (unsigned char)c;
		x++;
		len--;
	}
	return (b);
}
