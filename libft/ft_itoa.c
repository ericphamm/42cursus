/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qupham <qupham@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:58:13 by qupham            #+#    #+#             */
/*   Updated: 2023/02/24 23:24:23 by qupham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_allocate(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	if (n == -2147483648)
		len += 11;
	else if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*minz(int n, int i, char *res)
{
	if (n == 0)
		res[0] = n + '0';
	if (n == -2147483648)
	{
		res[0] = '-';
		res[1] = '2';
		n = 147483648;
		while (n > 0)
		{
			res[i] = n % 10 + '0';
			n = n / 10;
			i--;
		}
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		len;

	len = ft_allocate(n);
	res = malloc((len + 1) * sizeof(char));
	i = len - 1;
	if (!res)
		return (NULL);
	res = minz(n, i, res);
	if (n < 0)
	{
		n *= -1;
		res[0] = '-';
	}
	while (n > 0)
	{
		res[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	res[len] = '\0';
	return (res);
}
