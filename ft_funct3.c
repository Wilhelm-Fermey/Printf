/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funct3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilhelmfermey <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:45:47 by wilhelmfermey     #+#    #+#             */
/*   Updated: 2022/03/02 12:06:50 by wilhelmfermey    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_adress(unsigned long adress)
{
	int	len;

	len = 0;
	while (adress)
	{
		len++;
		adress = adress / 16;
	}
	return (len);
}

void	ft_print_adress(unsigned long adress)
{
	if (adress > 15)
	{
		ft_print_adress(adress / 16);
		ft_print_adress(adress % 16);
	}
	else
	{
		if (adress > 9)
		{
			adress = (adress - 10) + 'a';
			ft_putchar(adress);
		}
		else
			ft_putchar(adress + 48);
	}
}

int	ft_print_ad(unsigned long adress)
{
	int	len;

	len = 0;
	if (!adress)
	{
		write(1, "0x0", 3);
		len = 3;
	}
	else if (adress)
	{
		len = 2;
		write(1, "0x", 2);
		ft_print_adress(adress);
		len = len + ft_len_adress(adress);
	}
	return (len);
}
