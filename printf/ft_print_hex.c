/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qupham <qupham@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:12:52 by qupham            #+#    #+#             */
/*   Updated: 2023/07/27 23:58:56 by qupham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal(unsigned int nb, char type)
{
	char	*hex;

	if (nb == 0)
		return (write(1, "0", 1));
	if (type == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (nb >= 16)
	{
		ft_hexadecimal(nb / 16, type);
		ft_hexadecimal(nb % 16, type);
	}
	else
	{
		if (nb <= 9)
			ft_putchar((nb + '0'));
		else
			write(1, &hex[nb % 16], 1);
	}
	return (ft_len(nb));
}

int	ft_uns_decimal(unsigned int nb)
{
	int		counter;
	char	*dec;

	dec = "0123456789";
	counter = 0;
	if (nb > 9)
		counter += ft_uns_decimal(nb / 10);
	counter += write(1, &dec[nb % 10], 1);
	return (counter);
}
