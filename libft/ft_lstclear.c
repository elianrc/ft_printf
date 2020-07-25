/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 00:42:30 by erc               #+#    #+#             */
/*   Updated: 2020/05/12 00:42:32 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Deletes and frees the
**given element and every
**successor of that element,
**using the function ’del’
**and free(3). Finally, the
**pointer to the list
**must be set to NULL.
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp;

	tmp = *lst;
	while (tmp)
	{
		del(tmp->content);
		tmp = tmp->next;
		free(*lst);
		*lst = tmp;
	}
	lst = NULL;
}
