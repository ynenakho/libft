/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynenakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 14:47:55 by ynenakho          #+#    #+#             */
/*   Updated: 2017/09/27 15:40:07 by ynenakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmp;
	t_list *tmp1;

	if (!lst)
		return (NULL);
	tmp = ft_lstnew(f(lst)->content, f(lst)->content_size);
	if (!tmp)
		return (NULL);
	tmp1 = tmp;
	lst = lst->next;
	while (lst)
	{
		tmp1->next = ft_lstnew(f(lst)->content, f(lst)->content_size);
		if (!tmp1->next)
			return (NULL);
		tmp1 = tmp->next;
		lst = lst->next;
	}
	return (tmp);
}
