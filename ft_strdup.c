/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynenakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 11:02:28 by ynenakho          #+#    #+#             */
/*   Updated: 2017/09/26 16:07:56 by ynenakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*newstr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	newstr = (char*)malloc(sizeof(*newstr) * (i + 1));
	if (!newstr)
		return (NULL);
	while (j < i)
	{
		newstr[j] = src[j];
		j++;
	}
	newstr[j] = '\0';
	return (newstr);
}
