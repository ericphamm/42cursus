/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qupham <qupham@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 21:22:43 by qupham            #+#    #+#             */
/*   Updated: 2023/02/24 16:30:34 by qupham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	if ((nmemb * size) < nmemb || (nmemb * size) < size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (0);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}
