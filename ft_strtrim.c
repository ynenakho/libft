/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynenakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 14:50:51 by ynenakho          #+#    #+#             */
/*   Updated: 2017/09/27 20:55:50 by ynenakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*new;
	int		str_len;

	if (!s)
		return (NULL);
	while ((*s == ' ' || *s == '\n' || *s == '\t') && *s != '\0')
		s++;
	str_len = (!*s) ? (0) : (ft_strlen(s) - 1);
	while (s[str_len] == ' ' || s[str_len] == '\n' || s[str_len] == '\t')
		str_len--;
	str_len = &s[str_len] - s;
	new = ((!str_len) ? ft_strnew(0) : (ft_strsub(s, 0, str_len + 1)));
	if (!new)
		return (NULL);
	return (new);
}
