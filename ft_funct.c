/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:19:00 by wfermey           #+#    #+#             */
/*   Updated: 2022/03/03 08:44:20 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(char *str)
{
	int	i;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_intlen(int nb)
{
	int	count;

	count = 0;
	if (nb < 0)
		count++;
	if (nb == 0)
		count++;
	while (nb)
	{
		count++;
		nb = nb / 10;
	}
	return (count);
}

int	ft_printnbr(int nb)
{
	int				res;
	unsigned int	nbr;

	res = ft_intlen(nb);
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	nbr = nb;
	if (nbr > 9)
	{
		ft_printnbr(nbr / 10);
		ft_printnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
	return (res);
}
