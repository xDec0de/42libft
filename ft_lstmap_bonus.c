/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:33:45 by daniema3          #+#    #+#             */
/*   Updated: 2024/09/16 19:33:45 by daniema3         ###   ########.fr       */
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
