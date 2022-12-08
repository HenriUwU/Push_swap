/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:52:38 by hsebille          #+#    #+#             */
/*   Updated: 2022/10/19 17:29:09 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar_count(const char c);
int	ft_putnbr_count(int n);
int	ft_adress(unsigned long n);
int	ft_hexalow(unsigned int n);
int	ft_hexaupp(unsigned int n);
int	ft_strlen2(const char *str);
int	ft_putstr_count(const char *str);
int	ft_putuint_count(unsigned int n);

#endif
