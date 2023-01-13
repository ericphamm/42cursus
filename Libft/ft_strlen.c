/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qupham <qupham@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:04:59 by qupham            #+#    #+#             */
/*   Updated: 2023/01/13 15:35:00 by qupham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int lenght = 0;
	while (*str != '\0')
	{
		str++;
		lenght++;
	}
	return lenght;
}
#include <stdio.h>
#include <string.h>
int main()
{
	char a[] = "hello";
	printf("%d",ft_strlen(a));
}
