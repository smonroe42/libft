/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonroe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 07:00:19 by smonroe           #+#    #+#             */
/*   Updated: 2018/04/16 07:21:52 by smonroe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int c)
{
	if (c > 0 && c <= 127)
		return (c);
	if (c == 0)
		return (1);
	else
		return (0);
}
