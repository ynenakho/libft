/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynenakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 14:35:11 by ynenakho          #+#    #+#             */
/*   Updated: 2017/09/24 16:11:52 by ynenakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new;
	char *temp;

	if (!s1 || !s2)
		return (NULL);
	new = ft_strnew(ft_strlen((char *)s1) + ft_strlen((char *)s2));
	temp = new;
	if (!new)
		return (NULL);
	while (*s1)
		*temp++ = *s1++;
	while (*s2)
		*temp++ = *s2++;
	*temp = '\0';
	return (new);
}
