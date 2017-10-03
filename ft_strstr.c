/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynenakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 12:57:41 by ynenakho          #+#    #+#             */
/*   Updated: 2017/09/22 15:05:58 by ynenakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	char *begin;
	char *p1;
	char *pattern;

	begin = NULL;
	pattern = NULL;
	p1 = (char *)str;
	if ((*str == '\0') && (*str == *to_find))
		return ((char *)str);
	while (*p1)
	{
		begin = p1;
		pattern = (char *)to_find;
		while (*p1 && *pattern && (*p1 == *pattern))
		{
			p1++;
			pattern++;
		}
		if (!*pattern)
			return (begin);
		p1 = begin + 1;
	}
	return (NULL);
}
