/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_int_unit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnazari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:55:28 by mnazari           #+#    #+#             */
/*   Updated: 2023/06/15 12:11:33 by mnazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_int(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len += ft_put_str(num);
	free(num);
	return (len);
}

int	ft_put_uint(unsigned int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_uitoa(n);
	len += ft_put_str(num);
	free(num);
	return (len);
}
