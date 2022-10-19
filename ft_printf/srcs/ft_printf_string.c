/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 00:28:07 by rkabzins          #+#    #+#             */
/*   Updated: 2022/04/17 00:28:18 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_printf_string(const char *input, int *output)
{
	int	i;

	i = 0;
	if (input == NULL)
	{
		(*output) += write(1, "(null)", 6);
		return ;
	}
	while (input[i])
	{
		ft_printf_char(input[i], output);
		i++;
	}
}
