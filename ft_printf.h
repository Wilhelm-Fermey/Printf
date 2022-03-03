/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:24:42 by wfermey           #+#    #+#             */
/*   Updated: 2022/03/03 09:12:03 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_printnbr(int nb);
int		ft_intlen(int nb);
int		ft_intlen_un(unsigned int nb);
int		ft_printnbr_un(unsigned int nb);
void	ft_print_adress(unsigned long adress);
int		ft_print_ad(unsigned long adress);
int		ft_exa_len(unsigned int nb);
int		ft_print_exa_min(unsigned int nb);
int		ft_print_exa_maj(unsigned int nb);
int		ft_print_percent(void);

#endif
