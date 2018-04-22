/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonroe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 06:19:30 by smonroe           #+#    #+#             */
/*   Updated: 2018/04/19 07:11:52 by smonroe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n)
		if (fd)
		{
			if (n == -2147483648)
				ft_putstr_fd("-2147483648", fd);
			else if (n < 0)
			{
				ft_putchar_fd('-', fd);
				n = -n;
			}
			else if (n > 9)
			{
				ft_putnbr_fd(n / 10, fd);
				ft_putchar_fd((n % 10) + '0', fd);
			}
			else if (n < 10)
				ft_putchar_fd(n + '0', fd);
		}
}
