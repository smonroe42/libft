/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonroe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 20:13:34 by smonroe           #+#    #+#             */
/*   Updated: 2018/04/22 09:19:03 by smonroe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_make_2d(char const *s, char **bloc, char c)
{
	int	i;
	int	w;
	int	l;

	i = 0;
	w = 0;
	l = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			i++;
			l++;
		}
		if (!(bloc[w++] = (char *)malloc(sizeof(bloc) * l + 1)) && s[i])
			return (NULL);
		l = 0;
	}
	if (!(bloc[w] = (char *)malloc(sizeof(bloc) * 8)))
		return (NULL);
	return (bloc);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		w;
	int		l;
	char	**bloc;

	if (s && c)
	{
		if (!(bloc = (char **)malloc(sizeof(s) * (ft_strlen(s) * 2))))
			return (NULL);
		if (!(bloc = ft_make_2d(s, bloc, c)))
			return (NULL);
		i = 0;
		w = 0;
		while (s[i])
		{
			l = 0;
			while (s[i] == c && s[i])
				i++;
			while (s[i] != c && s[i])
				bloc[w][l++] = s[i++];
			bloc[w++][l] = '\0';
		}
		bloc[w] = NULL;
		return (bloc);
	}
	return (NULL);
}
