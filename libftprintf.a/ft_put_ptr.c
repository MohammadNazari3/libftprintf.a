/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnazari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:58:08 by mnazari           #+#    #+#             */
/*   Updated: 2023/06/15 11:58:22 by mnazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_ptr(unsigned long int ptr);
int		ft_len_ptr(unsigned long int ptr);

int	ft_put_ptr(unsigned long int ptr)
{
	int	len;

	len = 0;
	len += ft_put_str("0x");
	ft_print_ptr(ptr);
	len += ft_len_ptr(ptr);
	return (len);
}

void	ft_print_ptr(unsigned long int ptr)
{
	if (ptr >= 16)
	{
		ft_print_ptr(ptr / 16);
		ft_print_ptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_put_c(ptr + '0');
		else
			ft_put_c(ptr - 10 + 'a');
	}
}

int	ft_len_ptr(unsigned long int ptr)
{
	unsigned long	len;

	len = 0;
	if (ptr == 0)
		len++;
	while (ptr != 0)
	{
		ptr /= 16;
		len++;
	}
	return (len);
}
