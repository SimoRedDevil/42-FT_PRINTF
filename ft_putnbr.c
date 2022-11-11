/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yous <mel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 04:33:13 by mel-yous          #+#    #+#             */
/*   Updated: 2022/11/10 19:25:23 by mel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	*str;
	int		len;

	str = ft_itoa(n);
	if (!str)
		return (0);
	len = ft_putstr(str);
	free(str);
	str = NULL;
	return (len);
}
