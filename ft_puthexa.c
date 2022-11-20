/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haguezou <haguezou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:07:19 by haguezou          #+#    #+#             */
/*   Updated: 2022/11/07 13:05:44 by haguezou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	putlowerhexa(unsigned int i, int *ptr)
{
	char	*hexa_lower;
	char	hexachar;

	hexa_lower = "0123456789abcdef";
	if (i <= 0)
		return ;
	putlowerhexa(i / 16, ptr);
	hexachar = hexa_lower[i % 16];
	write(1, &hexachar, 1);
	*ptr += 1;
}

void	putupperhexa(unsigned int i, int *ptr)
{
	char	*hexa_upper;
	char	hexachar;

	hexa_upper = "0123456789ABCDEF";
	if (i <= 0)
		return ;
	putupperhexa(i / 16, ptr);
	hexachar = hexa_upper[i % 16];
	write(1, &hexachar, 1);
	*ptr += 1;
}

void	ft_puthexa(unsigned int i, char x, int *ptr)
{
	if (i >= 0 && i <= 9)
		ft_putchar(i + '0', ptr);
	else
	{
		if (x == 'X')
		{
			putupperhexa(i, ptr);
		}
		else
			putlowerhexa(i, ptr);
	}
}
