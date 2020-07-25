/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erc <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 14:55:42 by erc               #+#    #+#             */
/*   Updated: 2020/05/12 14:55:43 by erc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Iterates the list ’lst’
**and applies the function
**’f’ to the content of
**each element. Creates a new
**list resulting of the
**successive applications of
**the function ’f’. The
**’del’ function is used to
**delete the content of an
**element if needed.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*tmp;

	if (!lst || !(tmp = ft_lstnew(f(lst->content))))
		return (NULL);
	new_lst = tmp;
	while (lst->next)
	{
		lst = lst->next;
		if (!(tmp = ft_lstnew(f(lst->content))))
			return (NULL);
		ft_lstadd_back(&new_lst, tmp);
		tmp = tmp->next;
		if (tmp)
			ft_lstdelone(tmp, del);
	}
	return (new_lst);
}
