/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qupham <qupham@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:23:19 by qupham            #+#    #+#             */
/*   Updated: 2023/07/27 23:57:17 by qupham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	lenght;

	lenght = 0;
	if (n == -2147483648)
		lenght += ft_putstr("-2147483648");
	else if (n > 9)
	{
		lenght += ft_putnbr(n / 10);
		lenght += ft_putnbr(n % 10);
	}
	else if (n < 0)
	{
		n = -n;
		lenght += ft_putchar('-');
		lenght += ft_putnbr(n);
	}
	else
		lenght += ft_putchar(n + '0');
	return (lenght);
}
