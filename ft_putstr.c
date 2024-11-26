/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:39:34 by maeskhai          #+#    #+#             */
/*   Updated: 2024/11/26 13:26:59 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	if (!s)
	{
		total += ft_putstr("(null)");
		return (total);
	}
	while (s[i])
	{
		total += ft_putstr(&s[i]);
		i++;
	}
	return (total);
}
