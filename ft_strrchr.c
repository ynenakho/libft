/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynenakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 18:30:30 by ynenakho          #+#    #+#             */
/*   Updated: 2017/09/22 16:14:04 by ynenakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *ps;
	char *fin;

	fin = NULL;
	ps = (char *)s;
	while (*ps)
	{
		if (*ps == (char)c)
			fin = ps;
		ps++;
	}
	if (((char)c == '\0') || (ps == '\0'))
		return (ps);
	return (fin);
}
