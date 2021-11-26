/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:54:16 by danimart          #+#    #+#             */
/*   Updated: 2021/09/23 10:13:01 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*res;
	t_list	*tmp;

	if (lst && f)
	{
		res = ft_lstnew(f(lst->content));
		tmp = res;
		while (lst->next)
		{
			lst = lst->next;
			tmp->next = ft_lstnew(f(lst->content));
			if (!tmp->next)
			{
				ft_lstclear(&res, del);
				return (NULL);
			}
			tmp = tmp->next;
		}
		return (res);
	}
	return (NULL);
}
