/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynenakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:14:01 by ynenakho          #+#    #+#             */
/*   Updated: 2017/09/21 21:01:31 by ynenakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*pdst;
	const unsigned char *psrc;

	pdst = (unsigned char *)dst;
	psrc = (const unsigned char *)src;
	if (pdst == psrc)
		return (dst);
	if (pdst > psrc)
	{
		pdst = pdst + len - 1;
		psrc = psrc + len - 1;
		while (len--)
		{
			*pdst-- = *psrc--;
		}
	}
	else
	{
		while (len--)
		{
			*pdst++ = *psrc++;
		}
	}
	return (dst);
}
