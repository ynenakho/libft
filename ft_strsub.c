/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynenakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 14:08:15 by ynenakho          #+#    #+#             */
/*   Updated: 2017/09/23 14:32:05 by ynenakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;
	int				j;

	j = 0;
	i = 0;
	new = ft_strnew(len);
	if (!new || !s)
		return (NULL);
	while (s[i])
	{
		if (i == start)
		{
			while (len-- && s[i])
			{
				new[j] = s[i];
				j++;
				i++;
			}
			new[j] = '\0';
			return (new);
		}
		i++;
	}
	return (NULL);
}
