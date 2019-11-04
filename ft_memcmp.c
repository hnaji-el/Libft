/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 23:26:18 by hnaji-el          #+#    #+#             */
/*   Updated: 2019/10/28 02:59:06 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*dst1;
	const unsigned char	*dst2;
	size_t				i;
	size_t				r;

	i = 0;
	r = 0;
	dst1 = (const unsigned char *)s1;
	dst2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (dst1[i] != dst2[i])
		{
			r = dst1[i] - dst2[i];
			return (r);
		}
		i++;
	}
	return (r);
}
