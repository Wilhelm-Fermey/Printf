/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:13:59 by wfermey           #+#    #+#             */
/*   Updated: 2022/03/03 09:08:04 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_if_forest(char c, va_list list)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = len + ft_printchar(va_arg(list, int));
	else if (c == 's')
		len = len + ft_printstr(va_arg(list, char *));
	else if (c == 'd' || c == 'i')
		len = len + ft_printnbr(va_arg(list, int));
	else if (c == 'u')
		len = len + ft_printnbr_un(va_arg(list, unsigned int));
	else if (c == 'p')
		len = len + ft_print_ad(va_arg(list, unsigned long));
	else if (c == 'X')
		len = len + ft_print_exa_maj(va_arg(list, unsigned int));
	else if (c == 'x')
		len = len + ft_print_exa_min(va_arg(list, unsigned int));
	else if (c == '%')
		len = len + ft_print_percent();
	return (len);
}

int	ft_read(const char *str, va_list list)
{
	int	i;
	int	count;
	int	len;

	count = 0;
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len = len + ft_if_forest(str[i], list);
		}
		else
		{
			ft_putchar(str[i]);
			count++;
		}
		i++;
	}
	return (count + len);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		i;
	int		len;

	i = 0;
	va_start(list, str);
	len = ft_read(str, list);
	va_end(list);
	return (len);
}
