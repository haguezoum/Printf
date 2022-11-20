/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haguezou <haguezou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:00:06 by haguezou          #+#    #+#             */
/*   Updated: 2022/11/07 12:51:14 by haguezou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_printf.h"

void	ft_putnbr(int n, int *ptr)
{
	long	nbr;

	nbr = n;
	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648", ptr);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-', ptr);
		nbr *= -1;
	}
	if (nbr >= 0 && nbr <= 9)
	{
		ft_putchar(nbr + '0', ptr);
	}
	else
	{
		ft_putnbr(nbr / 10, ptr);
		ft_putnbr(nbr % 10, ptr);
	}
}
