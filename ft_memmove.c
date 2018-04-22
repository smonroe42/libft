/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonroe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 05:38:09 by smonroe           #+#    #+#             */
/*   Updated: 2018/04/22 09:20:57 by smonroe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;
	unsigned char	*tmp;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (!(tmp = (unsigned char *)malloc(sizeof(unsigned char) * len)))
		return (NULL);
	ft_memcpy(tmp, s, len);
	ft_memcpy(d, tmp, len);
	free(tmp);
	return (dst);
}
