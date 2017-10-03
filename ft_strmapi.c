/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynenakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 21:08:32 by ynenakho          #+#    #+#             */
/*   Updated: 2017/09/22 21:11:03 by ynenakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	char			*temp;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	new = ft_strnew(ft_strlen((char *)s));
	temp = new;
	if (!new)
		return (NULL);
	while (s[i])
	{
		*temp = f(i, s[i]);
		i++;
		temp++;
	}
	*temp = '\0';
	return (new);
}
