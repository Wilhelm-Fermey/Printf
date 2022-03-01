/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:24:42 by wfermey           #+#    #+#             */
/*   Updated: 2022/03/01 14:23:33 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
 #define PRINTF_H

#include <stdarg.h>
#include <unistd.h>

void    ft_putchar(char c);
void    ft_putnbr(int nb);
void    ft_putstr(char *str);
int ft_strlen(const char *str);

int ft_printchar(int c);

#endif
