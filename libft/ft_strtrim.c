/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qupham <qupham@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:11:48 by qupham            #+#    #+#             */
/*   Updated: 2023/02/25 22:03:42 by qupham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		start;
	int		len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (len > start && ft_strchr(set, s1[len - 1]))
		len--;
	str = malloc(sizeof(char) * (len - start) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (len > start)
		str[i++] = s1 [start++];
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include "libft.h"
// int main()
// {
// 	char s1[] = "lorem ipsum dolor sit amet";
// char set[] = "te";
// char *result = ft_strtrim(s1, set);
// printf("%s\n", result);
// }
