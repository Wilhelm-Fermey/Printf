/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:13:59 by wfermey           #+#    #+#             */
/*   Updated: 2022/03/01 15:37:55 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

#include <stdio.h>

int	ft_if_forest(char c, va_list list)
{
	int len;

	len = 0;
	if (c == 'c')
		len = len + ft_printchar(va_arg(list, int));
	return (len);
}

int	ft_read(const char *str, va_list list)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len	= len + ft_if_forest(str[i], list);
		}
		if (str[i -1] != '%')
			ft_putchar(str[i]);
		i++;
	}
	printf("len = %d\n", len);
	printf("i = %d\n", i);
	return (i + len);
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

int main(void)
{
	printf("\n%d\n", ft_printf("J'ai %c frere, %c soeur et %c fils\n", '5', '2', '0'));
}
