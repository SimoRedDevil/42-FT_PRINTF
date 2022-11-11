/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yous <mel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:23:16 by mel-yous          #+#    #+#             */
/*   Updated: 2022/11/08 10:42:36 by mel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	slen;
	size_t	i;

	slen = ft_strlen(s1);
	i = 0;
	ptr = (char *)malloc(slen + 1);
	if (ptr == NULL)
		return (NULL);
	while (i < slen)
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static size_t	ft_ncount(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
	{
		i++;
		n *= -1;
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	sz;
	char	*ptr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sz = ft_ncount(n);
	ptr = (char *)malloc(sz + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[sz] = '\0';
	if (n == 0)
		ptr[0] = '0';
	if (n < 0)
	{
		ptr[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		ptr[sz - 1] = (n % 10) + 48;
		n /= 10;
		sz--;
	}
	return (ptr);
}
