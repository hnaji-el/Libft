/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:38:00 by hnaji-el          #+#    #+#             */
/*   Updated: 2019/11/03 18:01:15 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		len;
	size_t		f;
	size_t		i;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	f = size - 1;
	while (f > 0 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		f--;
	}
	dst[i] = '\0';
	return (len);
}
