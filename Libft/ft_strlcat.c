/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qupham <qupham@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:47:19 by qupham            #+#    #+#             */
/*   Updated: 2023/01/14 21:07:55 by qupham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dst);
	if (size <= j)
		return (size + ft_strlen(src));
	while (size != 0 && src[i] != '\0' && j + 1 < size)
	{
		dst[j] = src[j];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (ft_strlen(src) + ft_strlen(&src[i]))
}
