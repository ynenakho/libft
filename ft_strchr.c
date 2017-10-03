/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynenakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 18:06:10 by ynenakho          #+#    #+#             */
/*   Updated: 2017/09/21 18:16:12 by ynenakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *ps;

	ps = (char *)s;
	while (*ps)
	{
		if (*ps == (char)c)
			return (ps);
		ps++;
	}
	if ((char)c == '\0')
		return (ps);
	return (NULL);
}
