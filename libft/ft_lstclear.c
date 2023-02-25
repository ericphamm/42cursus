/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qupham <qupham@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:44:14 by qupham            #+#    #+#             */
/*   Updated: 2023/02/24 18:58:54 by qupham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*slow;
	t_list	*fast;

	if (lst && *lst && del)
	{
		slow = *lst;
		while (slow)
		{
			fast = slow->next;
			ft_lstdelone(slow, del);
			slow = fast;
		}
		*lst = NULL;
	}
}
