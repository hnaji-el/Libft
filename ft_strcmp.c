/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 18:56:05 by ael-kass          #+#    #+#             */
/*   Updated: 2021/09/23 15:55:31 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	const unsigned char		*a;
	const unsigned char		*b;
	size_t					r;
	size_t					i;

	if (s1 == NULL || s2 == NULL)
		return (-1);
	a = (const unsigned char *)s1;
	b = (const unsigned char *)s2;
	i = 0;
	r = 0;
	while ((a[i] == b[i] && a[i] != '\0'))
		i++;
	r = a[i] - b[i];
	return (r);
}
