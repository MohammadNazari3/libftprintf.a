/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_c_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnazari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:54:55 by mnazari           #+#    #+#             */
/*   Updated: 2023/06/15 12:00:33 by mnazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_c(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_put_str(char *str)
{
	int	len;

	len = 0;
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (str[len])
		len++;
	ft_putstr_fd(str, 1);
	return (len);
}
