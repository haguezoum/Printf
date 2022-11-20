/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haguezou <haguezou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 20:06:19 by haguezou          #+#    #+#             */
/*   Updated: 2022/11/07 13:20:50 by haguezou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_printf.h"

void	hexapointer_helper(unsigned long long i, int *ptr)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (i <= 0)
		return ;
	hexapointer_helper(i / 16, ptr);
	ft_putchar(hexa[i % 16], ptr);
}

void	ft_puthexa_pointer(unsigned long long p, int *ptr)
{
	ft_putstr("0x", ptr);
	if (p >= 0 && p <= 9)
		ft_putchar(p + '0', ptr);
	else
		hexapointer_helper(p, ptr);
}
