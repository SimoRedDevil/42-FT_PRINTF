/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yous <mel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:21:11 by mel-yous          #+#    #+#             */
/*   Updated: 2022/11/08 18:22:00 by mel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_strlen(const char *s);
int		ft_putstr(const char *str);
char	*ft_itoa(int n);
int		ft_putnbr(int n);
int		ft_putunbr(unsigned int n);
int		ft_puthex(unsigned int n, const char *base);
int		ft_putptr(void *p);
char	*ft_putunbr_base(unsigned long long n, const char *base, short b);
#endif