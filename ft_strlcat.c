/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 22:42:29 by hnaji-el          #+#    #+#             */
/*   Updated: 2021/09/23 15:59:22 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		f;
	int		i;
	int		t;
	int		len1;
	int		len2;

	i = 0;
	len2 = ft_strlen(src);
	if (size == 0)
		return (len2 + (int)size);
	len1 = ft_strlen(dst);
	t = len1 + len2;
	if ((int)size <= len1)
		return (len2 + (int)size);
	f = (int)size - len1 - 1;
	while (f-- > 0 && src[i] != '\0')
		dst[len1++] = src[i++];
	dst[len1] = '\0';
	return (t);
}
