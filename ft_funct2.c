/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funct2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilhelmfermey <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 08:27:25 by wilhelmfermey     #+#    #+#             */
/*   Updated: 2022/03/02 14:33:59 by wilhelmfermey    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_intlen_un(unsigned int nb)
{
	int	count;

	count = 0;
	while (nb)
	{
		count++;
		nb = nb / 10;
	}
	return (count);
}

int	ft_printnbr_un(unsigned int nb)
{
	int	res;

	res = ft_intlen_un(nb);
	if (nb > 9)
	{
		ft_printnbr_un(nb / 10);
		ft_printnbr_un(nb % 10);
	}
	else
		ft_putchar(nb + '0');
	return (res);
}

int	ft_print_percent(void)
{
	write(1, "%", 1);
	return (1);
}
