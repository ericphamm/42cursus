/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qupham <qupham@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:27:41 by qupham            #+#    #+#             */
/*   Updated: 2023/01/13 21:41:24 by qupham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int arg)
{
	if (arg >= 65 && arg <= 90)
	{
		arg = arg + 32;
	}
	return (arg);
}
