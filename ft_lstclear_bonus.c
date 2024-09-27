/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:33:19 by daniema3          #+#    #+#             */
/*   Updated: 2024/09/25 17:08:05 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;
	t_list	*next;

	if (lst == NULL || del == NULL)
		return ;
	list = *lst;
	while (list != NULL)
	{
		next = list->next;
		ft_lstdelone(list, del);
		list = next;
	}
	*lst = NULL;
}
