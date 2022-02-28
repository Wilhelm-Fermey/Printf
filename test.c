/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilhelmfermey <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 20:21:52 by wilhelmfermey     #+#    #+#             */
/*   Updated: 2022/02/28 21:10:34 by wilhelmfermey    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#define length ((unsigned char)(-1))

typedef void	(*pointfunct)(char);

void    ft_putchar(char c);
void    ft_putadr(char c);

pointfunct	f[length] = { ['c'] = ft_putchar, ['p'] = ft_putadr};

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putadr(char c)
{
	printf("l'adresse est %c", c);
}

int	main(void)
{
	char	choix;
	char	res;

	choix = 'c';
	res = 'z';
	f[choix](res);
}
