/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funct4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilhelmfermey <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:34:30 by wilhelmfermey     #+#    #+#             */
/*   Updated: 2022/03/03 09:02:44 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_exa_len(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		len++;
	while (nb)
	{
		len++;
		nb = nb / 16;
	}
	return (len);
}

int	ft_print_exa_min(unsigned int nb)
{
	int	len;

	len = ft_exa_len(nb);
	if (nb > 15)
	{
		ft_print_exa_min(nb / 16);
		ft_print_exa_min(nb % 16);
	}
	else
	{
		if (nb > 9)
		{
			nb = nb - 10 + 'a';
			ft_putchar(nb);
		}
		else
			ft_putchar(nb + 48);
	}
	return (len);
}

int	ft_print_exa_maj(unsigned int nb)
{
	int	len;

	len = ft_exa_len(nb);
	if (nb > 15)
	{
		ft_print_exa_maj(nb / 16);
		ft_print_exa_maj(nb % 16);
	}
	else
	{
		if (nb > 9)
		{
			nb = nb - 10 + 'A';
			ft_putchar(nb);
		}
		else
			ft_putchar(nb + 48);
	}
	return (len);
}
