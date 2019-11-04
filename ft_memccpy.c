/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 22:37:17 by hnaji-el          #+#    #+#             */
/*   Updated: 2019/10/31 22:53:57 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		b;
	size_t				i;
	unsigned char		*dst1;
	const unsigned char	*src1;

	i = 0;
	dst1 = (unsigned char *)dst;
	src1 = (const unsigned char *)src;
	b = (unsigned char)c;
	while (i < n)
	{
		dst1[i] = src1[i];
		if (src1[i] == b)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
