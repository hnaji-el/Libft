/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_plus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <hnaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 17:47:03 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/09/23 22:57:37 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_plus(char **str)
{
	long	nb;
	int		sign;

	sign = 1;
	nb = 0;
	while ((**str >= 9 && **str <= 13) || **str == 32)
		(*str)++;
	if (**str == '-')
		sign = sign * (-1);
	if (**str == '-' || **str == '+')
		(*str)++;
	while (**str >= '0' && **str <= '9')
	{
		nb = nb * 10 + (**str - '0');
		(*str)++;
	}
	if (nb < 0 && sign > 0)
		return (-1);
	if (nb < 0 && sign < 0)
		return (0);
	return (sign * nb);
}
