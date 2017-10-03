/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynenakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 16:22:54 by ynenakho          #+#    #+#             */
/*   Updated: 2017/09/27 20:08:40 by ynenakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_count(char *str, char c)
{
	int counter;

	counter = 0;
	while (*str)
	{
		if ((*str != c) && ((*(str + 1) == c) || (*(str + 1) == '\0')))
			counter++;
		str++;
	}
	return (counter);
}

static char		**new_f(char **str)
{
	while (*str)
	{
		*str = ft_strdup(*str);
		str++;
	}
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	char	*str;
	int		counter;
	char	**new;
	char	*ptr;

	if (!s || !(str = ft_strdup(s)))
		return (NULL);
	counter = word_count(str, c);
	if (!(new = (char **)malloc(sizeof(char **) * (counter + 1))))
		return (NULL);
	ptr = str;
	while (*str)
	{
		if ((*str != c) && (*(str - 1) == '\0'))
			*new++ = str;
		if (*str == c)
			*str = '\0';
		str++;
	}
	*new = NULL;
	new = new - counter;
	new = new_f(new);
	ft_strdel((void *)&ptr);
	return (new - counter);
}
