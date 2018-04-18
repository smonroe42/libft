/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonroe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 05:25:48 by smonroe           #+#    #+#             */
/*   Updated: 2018/04/18 02:14:24 by smonroe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;
	unsigned char		q;

	s = src;
	d = dst;
	q = c;
	i = 0;
	while (i < n && s[i] != q)
	{
		d[i] = s[i];
		i++;
	}
	if (n > 0)
		d[i] = s[i];
	if (s[i] == q)
		return (unsigned char *)(d + i + 1);
	return NULL;
}
