/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:49:32 by hnaji-el          #+#    #+#             */
/*   Updated: 2019/10/28 17:30:53 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*v;
	size_t			i;

	v = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		v[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
