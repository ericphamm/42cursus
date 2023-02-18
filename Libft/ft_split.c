/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qupham <qupham@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:36:13 by qupham            #+#    #+#             */
/*   Updated: 2023/02/11 10:59:21 by qupham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	array_count(const char *s, char c)
{
	int	num;
	int	i;

	num = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			num++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (num);
}

static char	*allocate(int *i, int j, const char *s)
{
	char	*res;

	res = (char *)malloc((j + 1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, &s[*i], j + 1);
	*i = *i + j;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		ar;

	i = 0;
	if (!s)
		return (NULL);
	res = (char **)malloc((array_count(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	ar = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] == c)
			i++;
		while (s[i + j] && s[i + j] != c)
			j++;
		if (j > 0)
			res[ar++] = allocate(&i, j, s);
	}
	res[ar] = NULL;
	return (res);
}




// hello,this,,,is,test
// j=0
// i=0
// j=5
// res[0]=hello\0
// i=5



// i=5
// j=0
// ptkali carku , aproto 5+1 i++
// i=5+1
// j=0+4
// res[1]=this \0




// hello,this,,,is,test
// num 12    3    4
// i=10 11 12 13    14   15   16









