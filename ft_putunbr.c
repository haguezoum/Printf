/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haguezou <haguezou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:23:31 by haguezou          #+#    #+#             */
/*   Updated: 2022/11/07 13:34:20 by haguezou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_putunbr(unsigned int n, int *ptr)
{
	long	nbr;

	nbr = n;
	if (nbr >= 0 && nbr <= 9)
		ft_putchar(nbr + '0', ptr);
	else
	{
		ft_putnbr(nbr / 10, ptr);
		ft_putnbr(nbr % 10, ptr);
	}
}
