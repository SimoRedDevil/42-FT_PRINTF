/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yous <mel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 21:17:20 by mel-yous          #+#    #+#             */
/*   Updated: 2022/11/10 19:25:17 by mel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, const char *base)
{
	char	*str;
	int		r;

	str = ft_putunbr_base(n, base, 16);
	if (!str)
		return (0);
	r = ft_putstr(str);
	free(str);
	str = NULL;
	return (r);
}
