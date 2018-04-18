/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonroe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 22:27:50 by smonroe           #+#    #+#             */
/*   Updated: 2018/04/18 10:10:25 by smonroe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*new;
	int		i;

	i = 0;
	new = NULL;
	if ((new = malloc(size)))
	{
		bzero(new, size);
		return (new);
	}
	return (NULL);
}
