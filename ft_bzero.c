/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:29:26 by hnaji-el          #+#    #+#             */
/*   Updated: 2019/11/03 18:40:55 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*v;
	size_t			i;

	v = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		v[i] = 0;
		i++;
	}
}
