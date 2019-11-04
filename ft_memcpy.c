/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:31:09 by hnaji-el          #+#    #+#             */
/*   Updated: 2019/10/31 01:40:52 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst1;
	const unsigned char	*src1;
	size_t				i;

	i = 0;
	dst1 = (unsigned char *)dst;
	src1 = (const unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst == src)
		return (dst);
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}
