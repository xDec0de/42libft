/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:36:23 by danimart          #+#    #+#             */
/*   Updated: 2021/09/23 10:12:28 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	struct s_list	*list;

	if (!lst || !del)
		return ;
	list = *lst;
	while (list)
	{
		del(list->content);
		free(list);
		list = list->next;
	}
	*lst = NULL;
}
