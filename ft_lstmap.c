/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacoby <pjacoby@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:16:32 by pjacoby           #+#    #+#             */
/*   Updated: 2021/10/23 11:21:40 by pjacoby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*current_new;

	result = NULL;
	if (lst)
	{
		while (lst)
		{
			current_new = ft_lstnew(f(lst->content));
			if (!current_new)
				ft_lstclear(&result, del);
			ft_lstadd_back(&result, current_new);
			lst = lst->next;
		}
	}
	return (result);
}
