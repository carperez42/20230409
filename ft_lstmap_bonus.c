/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c        	                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carperez <carperez@student.45madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:25:03 by carperez          #+#    #+#             */
/*   Updated: 2023/03/05 15:21:07 by carperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *pNodo, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p_lstnew;
	t_list	*p_lstnext;

	p_lstnew = NULL;
	if (pNodo != NULL && f != NULL)
	{
		p_lstnew = ft_lstnew(f(pNodo->content));
		if (p_lstnew != NULL)
		{
			p_lstnext = p_lstnew;
			while (pNodo->next != NULL)
			{
				pNodo = pNodo->next;
				(p_lstnext->next) = ft_lstnew(f(pNodo->content));
				if (p_lstnext->next != NULL)
					p_lstnext = p_lstnext->next;
				else
					ft_lstclear(&p_lstnew, del);
			}
		}
	}
	return (p_lstnew);
}
// This function returns the pointer 'p_lstnew', which is a second list with
// the contents of the nodes from the original list pointed by 'pNodo' modified
// by the function 'f'. If an error occurs during the process of copying
// the modified content to a node in 'p_lstnew', this list will be completely
// deleted.