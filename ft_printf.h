/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haguezou <haguezou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 00:46:47 by haguezou          #+#    #+#             */
/*   Updated: 2022/11/07 13:43:15 by haguezou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const *s, ...);
void	ft_putchar(char c, int *ptr);
void	ft_putstr(char *s, int *ptr);
void	ft_puthexa(unsigned int i, char x, int *ptr);
void	ft_putnbr(int nbr, int *ptr);
void	ft_putunbr(unsigned int n, int *ptr);
void	ft_puthexa_pointer(unsigned long long p, int *ptr);
#endif
