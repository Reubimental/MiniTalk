/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 17:55:07 by rkabzins          #+#    #+#             */
/*   Updated: 2022/04/14 17:56:16 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdbool.h>
# include <signal.h>
# include <sys/wait.h>

int		ft_printf(const char *format, ...);
void	ft_printf_char(const char input, int *output);
void	ft_printf_string(const char *input, int *output);
void	ft_printf_numformat(unsigned long n, int base, int *output, bool upper);
void	ft_printf_int(int n, int *output);
typedef struct s_message
{
	char	c;
	size_t	i;
}	t_message;

extern t_message	g_msg;
size_t	ft_strlen(const char *str);
int		ft_atoi(const char *str);

#endif
