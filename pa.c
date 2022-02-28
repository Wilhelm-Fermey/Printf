/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:03:15 by wfermey           #+#    #+#             */
/*   Updated: 2022/02/28 15:18:31 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

typedef	int(*pointeurfunct)(char *);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);	
}

int	main(void)
{
	pointeurfunct	pf;

	pf = ft_strlen;
	printf("%d", pf("Hello World"));
}
