/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonroe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 23:10:31 by smonroe           #+#    #+#             */
/*   Updated: 2018/04/17 23:25:48 by smonroe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;
	int	k;
	int	t;

	i = 0;
	k = 0;
	t = 0;
	if (needle[0] == '\0')
		return (char *)(haystack);
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			k = i;
			while (needle[j] && (haystack[i] == needle[j]))
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return (char *)(haystack + k);
			i = k;
		}
		i++;
	}
	return (NULL);
}
