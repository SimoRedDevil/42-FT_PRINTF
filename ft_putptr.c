/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yous <mel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 22:36:14 by mel-yous          #+#    #+#             */
/*   Updated: 2022/11/10 19:25:27 by mel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *p)
{
	char		*str;
	int			r;
	const char	*base;

	base = "0123456789abcdef";
	str = ft_putunbr_base((unsigned long long)p, base, 16);
	if (!str)
		return (0);
	r = ft_putstr("0x");
	r += ft_putstr(str);
	free(str);
	str = NULL;
	return (r);
}
