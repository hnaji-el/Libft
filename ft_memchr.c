/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 19:45:56 by hnaji-el          #+#    #+#             */
/*   Updated: 2019/10/28 02:54:45 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s1;
	size_t				i;
	unsigned char		b;

	i = 0;
	s1 = (const unsigned char *)s;
	b = (unsigned char)c;
	while (i < n)
	{
		if (s1[i] == b)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
