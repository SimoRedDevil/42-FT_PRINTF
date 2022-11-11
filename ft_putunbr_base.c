/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yous <mel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:45:45 by mel-yous          #+#    #+#             */
/*   Updated: 2022/11/08 21:09:33 by mel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	ft_ncount(unsigned long long n, short b)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n > 0)
	{
		i++;
		n /= b;
	}
	return (i);
}

char	*ft_putunbr_base(unsigned long long n, const char *base, short b)
{
	unsigned int	sz;
	char			*ptr;

	sz = ft_ncount(n, b);
	ptr = (char *)malloc(sz + 1);
	if (!ptr)
		return (NULL);
	ptr[sz] = '\0';
	if (n == 0)
		ptr[0] = '0';
	while (n > 0)
	{
		ptr[sz - 1] = base[n % b];
		n /= b;
		sz--;
	}
	return (ptr);
}
