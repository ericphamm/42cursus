/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qupham <qupham@student.42prague.com>>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:23:44 by qupham            #+#    #+#             */
/*   Updated: 2023/06/27 19:04:04 by qupham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>

int			ft_putnbr(int n);
int			ft_putchar(char c);
int			ft_putstr(char *s);
int			ft_len(uintptr_t nb);
int			ft_print_address(uintptr_t nb);
int			ft_printf(const char *str, ...);
int			ft_uns_decimal(unsigned int nb);
int			ft_hexadecimal(unsigned int nb, char spc);

#endif