/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:33:19 by daniema3          #+#    #+#             */
/*   Updated: 2024/09/16 20:55:07 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	struct s_list	*list;

	if (lst == NULL || del == NULL)
		return ;
	list = *lst;
	while (list != NULL)
	{
		del(list->content);
		free(list);
		list = list->next;
	}
	*lst = NULL;
}
