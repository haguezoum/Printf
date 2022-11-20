/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haguezou <haguezou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:00:03 by haguezou          #+#    #+#             */
/*   Updated: 2022/11/07 12:34:58 by haguezou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	check_format_specifier(va_list ap, char *s, int *count_ptr)
{
	if (*s == 'c')
		ft_putchar(va_arg(ap, int), count_ptr);
	else if (*s == 's')
		ft_putstr(va_arg(ap, char *), count_ptr);
	else if (*s == 'x' || *s == 'X')
		ft_puthexa(va_arg(ap, unsigned int), *s, count_ptr);
	else if (*s == 'u')
		ft_putunbr(va_arg(ap, unsigned int), count_ptr);
	else if (*s == 'd' || *s == 'i')
		ft_putnbr(va_arg(ap, int), count_ptr);
	else if (*s == 'p')
		ft_puthexa_pointer(va_arg(ap, unsigned long long), count_ptr);
	else
		ft_putchar('%', count_ptr);
}

int	ft_printf(char const *s,	...)
{
	va_list	ap;
	int		count;
	int		*p_count;
	char	*str;

	va_start(ap, s);
	count = 0;
	p_count = &count;
	str = (char *)s;
	while (*str)
	{
		if (*str == '%' && *str)
		{
			str++;
			check_format_specifier(ap, str, p_count);
		}
		else
			ft_putchar(*str, p_count);
		str++;
	}
	va_end(ap);
	return (*p_count);
}
