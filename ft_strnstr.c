/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynenakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 14:34:12 by ynenakho          #+#    #+#             */
/*   Updated: 2017/09/26 15:14:40 by ynenakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	char	*begin;
	char	*p1;
	char	*pattern;
	int		l;

	begin = NULL;
	pattern = NULL;
	p1 = (char *)str;
	if (((*str == '\0') && (*str == *to_find)) || *to_find == '\0')
		return (p1);
	while (*p1 && len--)
	{
		l = len + 1;
		begin = p1;
		pattern = (char *)to_find;
		while (*p1 && *pattern && (*p1 == *pattern) && l--)
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
