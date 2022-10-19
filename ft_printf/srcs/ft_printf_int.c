/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 00:22:13 by rkabzins          #+#    #+#             */
/*   Updated: 2022/04/17 00:22:16 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_printf_int(int n, int *output)
{
	if (n == -2147483648)
	{
		ft_printf_string("-2147483648", output);
	}
	else if (n < 0)
	{
		ft_printf_char('-', output);
		ft_printf_int(-n, output);
	}
	else if (n >= 10)
	{
		ft_printf_int(n / 10, output);
		ft_printf_char(n % 10 + '0', output);
	}
	else
	{
		ft_printf_char(n + '0', output);
	}
}
