/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yous <mel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 04:34:17 by mel-yous          #+#    #+#             */
/*   Updated: 2022/11/10 19:25:57 by mel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	char		*str;
	int			r;
	const char	*base;

	base = "0123456789";
	str = ft_putunbr_base(n, base, 10);
	if (!str)
		return (0);
	r = ft_putstr(str);
	free(str);
	str = NULL;
	return (r);
}
