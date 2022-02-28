/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:13:59 by wfermey           #+#    #+#             */
/*   Updated: 2022/02/28 14:06:46 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>

#include <stdio.h>
#include "ft_putnbr.c"

void     ft_printf(const char *str, ...)
{
        va_list			list;
        int             i;
        int             res;
		char 			*resstr;

        i = 0;
        res = 0;
		va_start(list, str);
		while (str[i])
		{
			if (str[i] == '%')
			{
				i++;
				if (str[i] == 'd')
				{
					res = va_arg(list, int);
					ft_putnbr(res);
				}
				else if (str[i] == 's')
				{
					resstr = va_arg(list, char *);
					ft_putstr(resstr);
				}
				i++;
			}
			ft_putchar(str[i]);
			i++;
		}
		va_end(list);
}

int     main(void)
{
        ft_printf("I have %d brothers and %s sisters", 10, "three");
}
