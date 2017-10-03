/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynenakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 20:50:44 by ynenakho          #+#    #+#             */
/*   Updated: 2017/09/22 21:08:17 by ynenakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *new;
	char *temp;

	if (!s)
		return (NULL);
	new = ft_strnew(ft_strlen((char *)s));
	temp = new;
	if (!new)
		return (NULL);
	while (*s)
	{
		*temp = f(*s);
		s++;
		temp++;
	}
	*temp = '\0';
	return (new);
}
