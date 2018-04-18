/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonroe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 05:38:09 by smonroe           #+#    #+#             */
/*   Updated: 2018/04/18 09:36:08 by smonroe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*s;
	char		t[len];

	d = (char *)dst;
	s = (const char *)src;
	i = 0;
	while (i < len)
	{
		t[i] = s[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		d[i] = t[i];
		i++;
	}
	return (dst);
}
