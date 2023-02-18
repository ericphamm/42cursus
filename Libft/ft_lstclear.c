/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qupham <qupham@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:44:14 by qupham            #+#    #+#             */
/*   Updated: 2023/02/11 15:00:52 by qupham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *first;
	t_list *second;

	if (lst && *lst && del)
	{
		first = *lst;
		while (first)
		{
			second = first->next;
			ft_lstdelone(first, del);
			first = second;
		}
		*lst = NULL;
	}
}