/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:39:27 by maeskhai          #+#    #+#             */
/*   Updated: 2024/11/26 13:26:16 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	int	total;

	total = 0;
	if (n > 10)
	{
		total += ft_putnbr(n / 10);
		total += ft_putchar((n % 10) + 48);
	}
	else
		total += ft_putchar(n + 48);
	return (total);
}
