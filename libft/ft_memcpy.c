/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qupham <qupham@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:44:09 by qupham            #+#    #+#             */
/*   Updated: 2023/01/22 19:10:42 by qupham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst;
	char	*sr;

	i = 0;
	dst = (char *)dest;
	sr = (char *)src;
	if (!dest && !src)
	{
		return (NULL);
	}
	while (i < n)
	{
		dst[i] = sr[i];
		i++;
	}
	return (dest);
}
